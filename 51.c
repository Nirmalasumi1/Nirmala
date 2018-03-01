#include<stdio.h>
int main()
{
int n,r,rem;
printf("Enter the number:");
scanf("%d",&n);
r=strrev(n);
if(r!=0)
{
rem=r%10;
r=r/10;
}
printf("\t%d",rem);
return 0;
}
