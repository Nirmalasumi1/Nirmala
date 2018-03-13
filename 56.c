#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("Enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9'))
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
