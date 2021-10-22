#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[10],n,k;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter sum of elements\n");
  scanf("%d",&k);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if((a[i]+a[j])==k)
        printf("Indices are found at %d and %d\n",i,j);
    }
  }
  return 0;
}
