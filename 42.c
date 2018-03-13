#include<stdio.h>
#include<string.h>
int main()
{
char str[100],str1[100];
int len,len1;
printf("Enter the string:");
scanf("%s",str);
printf("Enter the string:");
scanf("%s",str1);
len=strlen(str);
len1=strlen(str1);
if(len==len1)
{
  printf("%s",str);
}
else if(len>len1)
{
  printf("%s",str);
}
else
{
  printf("%s",str1);
}
return 0;
}
