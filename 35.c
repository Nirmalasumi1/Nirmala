#include<stdio.h>
int main()
{
char s[100],count=0;
printf("Enter the string:");
scanf("%s",&s);
if(s>='0'&& s<='9')
{
count++;
printf("%d",count+1);
}
return 0;
}
