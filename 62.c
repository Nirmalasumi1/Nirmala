#include<stdio.h>
int main()
{
int n[50],i;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&n[i]);
}
if(n[i]=='0' || n[i]=='1')
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
