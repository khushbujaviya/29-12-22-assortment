

 //print all even elements from matrix.
#include<stdio.h>
main()
{
	int n;
	printf("enter size of row[n]:");
	scanf("%d",&n);
	
	
	int i;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("enter value[%d]",i);
		scanf("%d",&a[i]);
		}
	
	for(i=0;i<n;i++)
	{
	
		while(i%2==0)
		{
			printf("%d\n",a[i]);
			i++;
		}
	}
	}

