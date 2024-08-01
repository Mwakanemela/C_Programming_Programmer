/* name.c */
#include <stdio.h>

int main()
{
 char name[32];

 printf("What is your name?\n");
 scanf("%s", &name);

 printf("So, your name is %s\n", name);

 return 0; 
}
