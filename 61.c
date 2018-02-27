#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i,n;  
printf("Enter the string:");
scanf("%s",&s);
printf("Enter the number:");
scanf("%d",&n);  
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}
return 0;
}
