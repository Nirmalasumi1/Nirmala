#include<stdio.h>
int main()
{
int a[50],i,n;
printf("How many elements:");
scanf("%d",&n);
printf("enter the array:");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(a[i]>large)
{
large=a[i];
printf("The largest element is %d",large);
}
if(a[i]<small)
{
small=a[i];
printf("The smallest element is %d",small);
}
return 0;
}}
