#include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
int count=0,i;
printf("Enter the string:");
scanf("%[^\n]s",&s1);
for(i=0;s1[i] !=0;i++)
{
if(s1[i]==' ')
count++;
}
printf("The number of words in a given string is %d",count+1);
return 0;
}
