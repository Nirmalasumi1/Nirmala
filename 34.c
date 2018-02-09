#include<stdio.h>
int main()
{
char s[100];
int count,i;
printf("Enter the string:");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{
count++;
}
}
printf("The number of lines is %d",count+1);
return 0;
}
