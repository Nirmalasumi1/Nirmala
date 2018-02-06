#include<stdio.h>
int main()
{
char[50],s,i;
int count=0;
printf("Enter the string:");
scanf("%s",&s);
for(i=0;i<s;i++)
{
count++;
}
printf("%d",count);
return 0;
}
