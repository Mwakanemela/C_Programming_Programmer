/* file access basics in c */
#include <stdio.h>

int main()
{
 FILE *fh_output;

 fh_output = fopen("my_file.txt", "w");

 fputs("Mwakanemela\n", fh_output);
 fputs("Kayange", fh_output);
 
 fclose(fh_output);
 return 0;
}
