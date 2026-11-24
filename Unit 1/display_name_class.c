#include<stdio.h>
int main()
{
char name[50];
int age;
char division;

printf("Enter your name:");
scanf("%s", name);

printf("Enter your age:");
scanf("%d", &age);

printf("Enter your division:");
scanf(" %c", &division);

return 0;
}
