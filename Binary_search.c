#include<stdio.h>
int binary_search(int a[],int n,int key)
{
  int low,mid,high,i;
  low=0;high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
    return mid;
    else if(key>a[mid])
    low=mid+1;
    else
    high=mid-1;
  }
  return -1;
}
int main()
{
  int a[10],key,pos,i,n;
  printf("\n Enter number of elements:");
  scanf("%d",&n);
  printf("\n Enter %d elements:",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\n Enter the search element;");
  scanf("%d",&key);
  pos=binary_search(a,n,key);
  if(pos==-1)
  printf("\n Element not found");
  else
  printf("\n %d found at %d",key,pos+1);
}
