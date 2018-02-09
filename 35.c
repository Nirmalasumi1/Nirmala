#include<stdio.h>
int main()
{
char s[100],i,count;
printf("Enter the string:");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0',i++)
{
if(s[i]>='0'&& s[i]<='9')
{
count++;
}
}
printf("%d",count);
return 0;
}
