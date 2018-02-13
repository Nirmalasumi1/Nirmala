#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("Enter the string:");
scanf("%s",&s);
if((s>='a' &&s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9'))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
