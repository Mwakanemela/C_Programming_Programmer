/* string basics.c */
#include <stdio.h>
#include <string.h>

int main()
{
 char myName[] = "Mwakanemela Kayange";

 int length = strlen(myName);

 printf("String length is: %d\n", length);

 int count_a = 0;

 for(int i = 0; i < length; i++)
 {
  if(myName[i] == 'a' || myName[i] == 'A')
    count_a++;
 }

 printf("a count is %d\n", count_a);
 return 0;
}
