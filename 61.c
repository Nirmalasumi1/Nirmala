#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i,n;
printf("Enter the number:");
scanf("%d",&n);  
printf("Enter the string:");
scanf("%s",&s);
for(i=0;i<n;i++)
{
printf("%c",i);
}
return 0;
}
