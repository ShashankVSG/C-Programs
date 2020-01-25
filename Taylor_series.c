#include<stdio.h>
#include<math.h>
#define PI 3.142
int main()
{
  int i,degree;
  float x,sum=0,term,nume,fact;
  printf("\n Enter value of degree:");
  scanf("%d",&degree);
  x=degree*(PI/180);
  nume=x;
  fact=1;
  i=2;
  do{
    term=nume/fact;
    nume=-nume*x*x;
    fact=fact*i*(i+1);
    sum=sum+term;
    i=i+2;
  }while(fabs(term)>=0.00001);
  printf("\n The sine of %d=%.3f",degree,sum);
  printf("\n Using inbuilt function sin(%d)=%.3f",degree,sin(x));
}
