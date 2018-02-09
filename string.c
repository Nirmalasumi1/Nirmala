#include<stdio.h>
int main()
{
char s[50];
int i,k;
printf("enter a string:");
scanf("%s",&s);
printf("Enter the k value:");
scanf("%d",&k);  
for(i=1;i<=k;i++)
{
printf("\n %s",s);
}
return 0;
}
