#include<stdio.h>
int main()
{
int N,A,D,i,sum=0;
printf("Enter the N,A and D:");
scanf("%d%d%d",&N,&A,&D);
for(i=0;i<N;i++)
{
printf("%d",&A);
sum=sum+A;
A=A+D;
}
printf("%d The sum of the series:");
return 0;
}
