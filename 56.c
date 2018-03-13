#include<stdio.h>
#include<string.h>
int main()
{
char s[50],i,count=0,count1=0;
printf("Enter the string:");
scanf("%s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
{
  count++;
}
if(s[i]>='0' && s[i]<='9')
{
  count1++;
}
}
if((count && count1)>0)
{
  printf("yes");
}
else
{
printf("no");
}
return 0;
}
