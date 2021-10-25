#include<stdio.h>
#include<stdlib.h>
int main()
{
  int r,c,a[10][10],t[10][10];
  printf("Enter row and column of matrix\n");
  scanf("%d%d",&r,&c);
  printf("Enter the elements of matrix\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  }
  printf("Original image is\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      printf("%d\t",a[i][j]);
    printf("\n");
  }
  //transposing the matrix
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      t[j][i]=a[i][j];
  }
  printf("\nFinal image is\n");
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++)
      printf("%d\t",t[i][j]);
    printf("\n");
  }
  return 0;
}
