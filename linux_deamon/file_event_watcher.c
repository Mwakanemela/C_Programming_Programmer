#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <signal.h>
#include <sys/inotify.h>

#define EXIT_SUCCESS 0
#define EXIT_ERR_FEW_ARGS 1
#define EXIT_ERROR_CODE 2


int IeventQueue = -1;
int IeventStatus = -1;


int main(int argc, char** argv) {

	char *basePath = NULL;
	char *token = NULL;
	char *notificationMessage = NULL;

	char buffer[4096]; //4kb buffer
	int readLength;

	const struct inotify_event *watchEvent;


	const uint32_t watchMask = IN_CREATE | IN_DELETE | IN_ACCESS | IN_CLOSE_WRITE | IN_MODIFY | IN_MOVE_SELF;
	if(argc < 2) {
		fprintf(stderr, "USAGE: file_event_watcher PATH\n");
		exit(EXIT_ERR_FEW_ARGS);
	}

	basePath = (char *)malloc(sizeof(char)*(strlen(argv[1]) +1));
	strcpy(basePath, argv[1]);

	token = strtok(basePath, "/");
	while(token != NULL) {

		basePath = token;
		token = strtok(NULL, "/");
	}

	if(basePath == NULL) {
		fprintf(stderr, "Error getting file or base path\n");
		exit(EXIT_ERROR_CODE);
	}
	
	printf("%s\n", basePath);
	
	IeventQueue = inotify_init();
	if(IeventQueue == -1) {
		fprintf(stderr, "Error initializing inotify instance\n");
		exit(EXIT_ERROR_CODE);
	}
	
	IeventStatus = inotify_add_watch(IeventQueue, argv[1], watchMask);
	if(IeventStatus == -1) {
		fprintf(stderr, "Error adding file to watch instance\n");
		exit(EXIT_ERROR_CODE);
	}	
	while(true) {
		printf("Waiting for event...\n");
		
		readLength = read(IeventQueue, buffer, sizeof(buffer));
		if(readLength == -1) {
			fprintf(stderr, "Error readlength\n");
			exit(EXIT_ERROR_CODE);
		}
		for(char *bufferPointer = buffer; bufferPointer < buffer + readLength; bufferPointer += sizeof(struct inotify_event) + watchEvent->len) {
		
			notificationMessage = NULL; 
			watchEvent = (const struct inotify_event *) bufferPointer;
			
			
			
			//display received msg
			if(watchEvent->mask & IN_CREATE) {
				notificationMessage = "File  created...\n";
			}
			
			if(watchEvent->mask & IN_DELETE) {
				notificationMessage = "File deleted...\n";
			}
			
			if(watchEvent->mask & IN_ACCESS) {
				notificationMessage = "File accessed...\n";
			}
			
			if(watchEvent->mask & IN_CLOSE_WRITE) {
				notificationMessage = "File written and closed...\n";
			}
			
			if(watchEvent->mask & IN_MODIFY) {
				notificationMessage = "File modified...\n";
			}
			
			if(watchEvent->mask & IN_MOVE_SELF) {
				notificationMessage = "File moved...\n";
			}
			
			if(notificationMessage == NULL) {
				continue;
			}
			
			printf("%s\n", notificationMessage);
		}			
	}		

	return 0;
}
