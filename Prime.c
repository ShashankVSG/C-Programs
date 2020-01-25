#include<stdio.h>
int isprime(int n)
{
  int i;
  if(n==0||n==1)
  {
    return 1;
  }
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  int num;
  printf("\n Enter the number:");
  scanf("%d",&num);
  if(isprime(num)==1)
  printf("\n %d is prime",num);
  else
  printf("\n %d is not prime",num);
}
