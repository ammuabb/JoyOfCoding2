#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,sum,a[10],count=0,s=0,e=0,flag=0;
  printf("Enter the number of elements in array\n");
  scanf("%d",&n);
  printf("Enter the elements of array\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the sum\n");
  scanf("%d",&sum);
  for(int i=0;i<n;i++){
    count=0;
    for(int j=i;j<n;j++){
      count=count+a[j];
      if(count==sum){
        s=i;
        e=j;
        flag=1;
        break;
      }
    }
    if(flag!=0)
      break;
  }
  printf("[");
  for(int i=s;i<=e;i++)
    printf(" %d ",a[i]);
  printf("]\n");
  printf("\nIndices range from %d to %d\n",s,e);
  return 0;
}
