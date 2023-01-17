//sum of diagonal elements of a matrix.

#include<stdio.h>
main()
{
	int n,m;
	printf("enter size of row[n]:");
	scanf("%d",&n);
	printf("enter size of column[m]:");
	scanf("%d",&m);
	
	int i,j;
	int a[n][m];
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("enter value[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			while(a[i]==a[j])
			{
			sum+=a[i][j];
				printf("%d\n",sum);
			i++;
			}
		
		}
	
	}
	
	
}
