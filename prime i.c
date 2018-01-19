#include<stdio.h>
int main()
{
int m,n,i,c=0;
printf("Enter the range of m and n:");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
if(i%1==0)
{
c++;
}
}
if(c==2)
{
printf("%d",i);
}
return 0;
}
