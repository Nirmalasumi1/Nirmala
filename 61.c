#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i;
printf("Enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
printf("%s",i+2);
}
return 0;
}
