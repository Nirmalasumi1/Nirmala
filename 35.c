#include<stdio.h>
int main()
{
char s[100],i,count=0;
printf("Enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0',i++)
{
if(s>='0'&& s<='9')
{
count++;
}
}
printf("%d",count+1);
return 0;
}
