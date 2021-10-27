#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  	char str[100],res;
  	int i, len;
  	int max = -1;
  	int freq[256] = {0};//maximum characters which can be accepted
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	len = strlen(str);
  	for(i = 0; i < len; i++){
  		freq[str[i]]++;
  	}
  	for(i = 0; i < len; i++){
		    if(max < freq[str[i]]){
			      max = freq[str[i]];
			      res = str[i];
		       }
	   }
	printf("\n The Maximum Occurring Character in  Given String : %c ", res);
  return 0;
}
