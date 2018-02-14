#include<stdio.h>
int main()
{
char a[50],i;
int count=0;
printf("Enter the string:");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
printf("%d",count+1);
return 0;
}
