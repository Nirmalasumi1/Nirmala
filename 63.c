#include<stdio.h>
int main()
{
char s[50];
int i,count;
printf("Enter the string:");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("%d",count+1);
return 0;
}
