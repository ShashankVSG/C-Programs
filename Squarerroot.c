#include<stdio.h>
int main()
{
  float num,temp,sqrt;
  printf("\n Enter a number:");
  scanf("%f",&num);
  sqrt=num;
  temp=0;
  while(sqrt!=temp)
  {
    temp=sqrt;
    sqrt=(num/temp+temp)/2;
  }
  printf("\n Square root of %f=%.3f",num,sqrt);
}
