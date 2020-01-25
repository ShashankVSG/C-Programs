#include<stdio.h>
#include<math.h>
int main()
{
  float a[10],*ptr,mean,std,sum=0,sumstd=0;
  int n,i;
  printf("\n Enter number of elements:");
  scanf("%d",&n);
  printf("\n Enter %d elements:",n);
  for(i=0;i<n;i++)
  scanf("%f",&a[i]);
  ptr=a;
  for(i=0;i<n;i++)
  {
    sum=sum+*ptr;
    ptr++;
  }
  ptr=a;
  mean=sum/n;
  for(i=0;i<n;i++)
  {
    sumstd=sumstd+pow((*ptr-mean),2);
    ptr++;
  }
  std=sqrt(sumstd/n);
  printf("\n Sum=%.3f\nMean=%.3f\nStandard deviation=%.3f",sum,mean,std);
}
