/* string basics.c */
#include <stdio.h>
#include <string.h>

int main()
{
 char myName[] = "Mwakanemela Kayange";

 int length = strlen(myName);

 printf("String length is: %d\n", length);
 return 0;
}
