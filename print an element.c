//print all negative elements in an array.

#include<stdio.h>
main()
{
	int n;
		printf("enter size of arry:");
		scanf("%d",&n);
		int i,a[n];
		for(i=0;i<n;i++)
		{ 
		 printf("enter value[%d]:",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			while(a[i]<0)
			{
					printf("%d\n",a[i]);
					i++;
		}
}
}


  
