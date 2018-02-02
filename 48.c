#include<stdio.h>
int main()
{
int n,sum=0,numbers;
float avg;
printf("Enter how many numbers you want:");
scanf("%d",&n);
printf("Enter the numbers:");
scanf("%d",&numbers);
for(i=0;i<n;i++)
{
sum=sum+numbers;
}
avg=sum/n;
printf("The average is:%d",avg);
return 0;
}
