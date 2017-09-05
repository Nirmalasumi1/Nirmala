#include<stdio.h>
void main()
{
int c;
printf("enter the character:");
scanf("%c",&c);
if((c>='a'&&c<='z')//(c>='A'&&c<='Z'))
{
printf("the character is an alphabet:");
}
else
{
printf("the character is not an alphabet:");
}
}
