#include<stdio.h>
#include<string.h>
int main()
{
  char str[50],n,m;
  printf("Enter the string:");
  scanf("%s",str);
  n=strlen(str);
  if(n%2!=0)
  {
    m=n/2;
    str[m]='*';
  }
  printf("%s",str);
  return 0;
}
