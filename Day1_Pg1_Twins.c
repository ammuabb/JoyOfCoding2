#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[10],n,flag=0;
  printf("Enter number of values\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            flag=1;
            break;
        }
    }
  }
  if(flag==1)
    printf("Group not distinct\n");
  else
    printf("Group distinct\n");
  return 0;
}
