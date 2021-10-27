#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char str1[100],str2[100];
  printf("Enter the first string\n");
  gets(str1);
  printf("Enter the second string\n");
  gets(str2);
  if(strlen(str1)!=strlen(str2))
    printf("Second string isn't the rotated version of first string\n");
  else{
    strcat(str1,str1);
    if(strstr(str1,str2)!=NULL)
      printf("Second string is the rotated version of first string\n");
    else
      printf("Second string isn't the rotated version of first string\n");
  }
  return 0;
}
