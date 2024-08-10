/* countdown.c */
#include<stdio.h>
#include<unistd.h>

int main()
{
 int number = 10;

 while(1)
 {
  printf("New Year in %d\n", number);
  sleep(1);
  number--;
 
  if(number < 1)
  {
   printf("Happy New Year!!\n");
   break;
  }
 }
 return 0;
}
