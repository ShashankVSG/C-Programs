#include<stdio.h>
int convert(int bin)
{
  if(bin==0)
  return 0;
  else
  return (bin%10+2*convert(bin/10));
}
int main()
{
  int bin,dec;
  printf("\n Enter a binary number:");
  scanf("%d",&bin);
  dec=convert(bin);
  printf("\n Decimal equivalent of %d= %d",bin,dec);
}
