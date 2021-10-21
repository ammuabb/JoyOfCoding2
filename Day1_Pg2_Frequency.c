#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[10], f[10], i, j, count,n;

	printf("Enter Number of elements in an array\n");
	scanf("%d", &n);

	printf("Enter elements of an array\n");
	for (i = 0; i <n; i++)
	{
    	scanf("%d", &a[i]);
    	f[i] = -1;
   	}

	for (i = 0; i <n; i++)
	{
		count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])
    		{
    			count++;
    			f[j] = 0;
    		}
    	}
    	if(f[i] != 0)
    	{
    		f[i] = count;
		}
	}
 	for (i = 0; i <n; i++)
  	{
  		if(f[i] != 0)
  		{
  			printf("%d's : %d\n", a[i], f[i]);
		}
  	}
  return 0;
}
