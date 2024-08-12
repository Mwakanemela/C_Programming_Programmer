/* file access basics in c */
#include <stdio.h>

int main()
{
 FILE *fh_output;

 fh_output = fopen("my_file.txt", "w");

 fputs("Mwakanemela\n", fh_output);
 fputs("Kayange\n", fh_output);
 
 char name[] = "Mwakanemela Kayange";

 fprintf(fh_output, "name: %s\n", name); 
 fclose(fh_output);

 FILE *fh_input;
 fh_input = fopen("my_file.txt", "r");

 char data[32];
 
 while(fscanf(fh_input, "%s", &data) != EOF)
 {
  printf("%s\n", data);
 }

 fclose(fh_input);
 return 0;
}
