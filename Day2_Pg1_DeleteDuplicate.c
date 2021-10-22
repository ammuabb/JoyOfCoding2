#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[10],n;
  printf("Enter number of elements\n");
  scanf("%d",&n );
  printf("Enter the elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){//checking duplicates
        printf("Deleted element %d\n",a[j]);
        while(j<n){//deleting the duplicate element
          a[j]=a[j+1];//place the number next to duplicate in the duplicate's place
          j++;
        }
        n--;
      }
    }
  }
  printf("Final array after deletion\n");
  for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
  return 0;
}
