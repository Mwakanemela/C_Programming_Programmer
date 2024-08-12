/* select.c - Mwaka scanf */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/time.h>
#include<unistd.h>


char *timedReadLine(int timeout)
{
 static char buffer[512]; //use static so we can return it
 fd_set rfds; // fdset for select
 struct timeval tv; //for timeout
 int ret; //return value
 
 FD_ZERO(&rfds); //zero out rfds
 FD_SET(0, &rfds); //bind stdin(0) with the

 tv.tv_sec = timeout; //set seconds timeout
 tv.tv_usec = 0; //but zero milliseconds
 
 //then whe use the select
 ret = select(1, &rfds, 0, 0, &tv);
 
 //if we have any data to be read from the keyboard
 if(ret && FD_ISSET(0, &rfds))
 {
  //zero out the buffer
  memset(buffer, 0, 512);

  //read from the keyboard - ret will contain the number of bytes read
  ret = read(0, buffer, 511);
  if(ret < 1)
   return 0;
  ret--;

  buffer[ret] = 0;

  return buffer;
 }
//function timed out
 else
  return 0;
}



int main()
{
 char *name;
 
 printf("What is ur name (enter in 5 seconds): "); fflush(stdout);
 name = timedReadLine(5);

 if(name)
  printf("Hello %s\n", name);
 else
  printf("\nToo slow");
 return 0;
}
