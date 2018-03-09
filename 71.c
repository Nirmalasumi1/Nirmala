#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len,i,flag=0;
printf("Enter the string:");
scanf("%s",&str);
len=strlen(s);
for(i=0;i<len;i++)
{
if(str[i]!=str[len-i-1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("It is not palindrome");
}
else
{
printf("It is palindrome");
}
return 0;
}
