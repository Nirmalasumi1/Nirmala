#include<stdio.h>
int main()
{
int n,sum=o,numbers,i;
float average;
printf("Enter how many numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&numbers);
sum=sum+numbers;
}
average=sum/n;
printf("%d",The sum is:);
printf("%f",The average is:);
return 0;
}
