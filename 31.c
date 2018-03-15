#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int l,i,count=0;
  printf("enter the string:");
  gets(str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {
    if(str[i]!=' ')
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
