#include<stdio.h>
int main()
{
int m,n,i,r,result=0;
printf("Enter the range of m and n:");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
r=i%10;
result=result+(r*r*r);
i=i/10;
}
if(result==i)
{
printf("It is an armstrong number:");
else
printf("It is not an armstrong number:");
}
return 0;
}
