#include<stdio.h>
int main()
{
  int i,r,s,k;
  printf("\n Enter number of rows:");
  scanf("%d",&r);
  for(i=0;i<r;i++)
  {
    for(s=0;s<r-i;s++)
    {
      printf(" ");
    }
    int m=0;
    for(k=0;k<=i/2;k++)
    {
      m++;
      printf("%d",m);
    }
    for(k=0;k<=i;k++)
    {
      m--;
      printf("%d",m);
    }
    printf("\n");
  }
}
