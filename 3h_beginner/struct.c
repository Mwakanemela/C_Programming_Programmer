/* struct.c */
#include <stdio.h>
#include <string.h>

struct person {
 char firstname[32];
 char lastname[32];
 int age;
};

int main()
{
 struct person human;

 strncpy(human.firstname, "Mwakanemela", 31);
 strncpy(human.lastname, "Kayange", 31);
 human.age = 21;

 printf("%s %s of age %d\n",
	human.firstname,
	human.lastname,
	human.age);

 return 0;
}
