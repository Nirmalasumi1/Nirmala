#include<stdio.h>
void main()
{
char str[25];
int a=0;
printf("Enter a string:");
scanf("%s",&str);
if((str=='a' && str=='z')||(str=='A' && str=='Z'))
{
a++;
printf("Alphabets=%d\n",a);
}
}
