#include<stdio.h>
#include<string.h>
int main()
{
char n[50];
int i,l,flag=0;
l=strlen(n);
printf("Enter the number:");
scanf("%s",&n);
for(i=0;i<l;i++)
{
if(n[i]=='1' || n[i]=='0')
{
  flag=1;
}
else
{
  flag=0;
break;
}
}
if(flag==1)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
