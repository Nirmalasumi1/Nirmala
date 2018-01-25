#include<stdio.h>
int main()
{
int n,a[25],i,max;
printf("Enter how many elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 max=a[0];
for(i=1;i<n;i++)
{
if(max<a[i])
{
 max=a[i];
}
}
printf("The max element is %d",max);
return 0;
}
