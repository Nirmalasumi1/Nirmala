#include<stdio.h>
int main()
{
int a[10],n,i,sum=0,k;
printf("enter the value of n:");
scanf("%d",&n);
  printf("Enter the array elements:");
for(i=1;i<=n;i++)
{
  scanf("%d",&a[i]);
}
  printf("Enter the value of k:");
  scanf("%d",&k);
  for(i=0;i<=k;i++)
  {
    sum=sum+a[i];
  }
printf("%d",sum);
return 0;
}
