//find second largest number in array.
#include<stdio.h>
main()
{
	int n;
	  printf("enter size of array");
	  scanf("%d",&n);
	   int i,a[n],f,s;
	  for(i=0;i<n;i++)
	  {
	  	printf("enter value[%d]",i);
	 	 scanf("%d",&a[i]);
	 }
	 	f=s;
	   for(i=0;i<n;i++)
	  	 {
		    if(a[i]>f)
	 	 {
	  		s=f;
	  		f=a[i];
	  }
	  	else if(a[i]>s && a[i]<f)
	  	{
	  	s=a[i];
	  	}
	}
	printf("first largest number:%d\n",f);
	printf("second largest number:%d\n",s);	
}
	  

