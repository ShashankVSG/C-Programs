#include<stdio.h>
#include<stdlib.h>
void matmul(int a[10][10],int b[10][10],int c[10][10],int m,int n,int p,int q)
{
  int i,j,k;
  for(i=0;i<m;i++)
  {
  for(j=0;j<q;j++)
  {
  c[i][j]=0;
}
}
  for(i=0;i<m;i++)
{  for(j=0;j<q;j++)
{  for(k=0;k<n;k++)
{  c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
}
int main()
{
  int m,n,p,q,a[10][10],b[10][10],c[10][10],i,j;
  printf("\n Enter size of matrix A:");
  scanf("%d %d",&m,&n);
  printf("\n Enter size of matrix B:");
  scanf("%d %d",&p,&q);
  if(n!=p)
  {
    printf("\n Multiplication not possible");
    exit(0);
  }
  printf("\n Enter matrix A:\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  printf("\n Enter matrix B:\n");
  for(i=0;i<p;i++)
  for(j=0;j<q;j++)
  scanf("%d",&b[i][j]);
  matmul(a,b,c,m,n,p,q);
  printf("\n Resultant matrix:\n");
  for(i=0;i<m;i++)
  {
  for(j=0;j<q;j++)
  {
  printf("%d\t ",c[i][j]);
  }
  printf("\n");
  }
}
