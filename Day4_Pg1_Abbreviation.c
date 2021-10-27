#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  /*char name[20],ab[10];
  int k=0;
  printf("Enter the complete name\n");
  gets(name);
  for(int i=0;i<strlen(name);i++){
    if(65>=name[i] && name[i]<=90){
      //Interchange signs to check for lowercase letters
      ab[k]=name[i];
      k++;
    }
  }
  ab[k]='\0';
  printf("Abbreviation(Short Form) for given name:\n");
  puts(ab);*/
  char name[20],ab[10];
  int j=0,k=0;
  printf("Enter the complete name\n");
  scanf("%[^\n]%*c",name);
  for(int i=0;i<strlen(name);i++){
    ab[k]=name[j];
    if(name[i]==' '){
      k=k+1;
      j=i;
      ab[k]=name[j];
      j++;
    }
  }
  ab[k+1]='\0';
  printf("Abbreviation(Short Form) for given name:\n");
  printf("%s",ab);
  return 0;
}
