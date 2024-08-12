/* command line arguments */
#include <stdio.h>

int main(int argc, char *args[])
{
 printf("number of arguments %d\n", argc);

 for(int i = 0; i < argc; i++)
  printf("argc[%d] : %s\n", i, args[i]);
 return 0;
}
