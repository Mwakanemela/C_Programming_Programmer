/* while.c */
#include<stdio.h>

int main()
{

 int x = 0;

 while(x == 0)
 {
  printf("Press any key except 0 to continue\n");
  scanf("%d", &x);
 }
 return 0;
}
