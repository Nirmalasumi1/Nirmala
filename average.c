#include<stdio.h>
int main()
{
int n,i,sum=o,numbers;
float average;
printf("Enter how many numbers you want:");
scanf("%d",&n);
  printf("enter the elements one by one:");
for(i=0;i<n;i++)
{
scanf("%d",&numbers);
sum=sum+numbers;
}
average=sum/n;
printf("\n sum of %d numbers=%d",n,sum);
printf("average of %d numbers=%2f",n,average);
return 0;
}
