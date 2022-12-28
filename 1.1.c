//get&print 1D array of n element

#include<stdio.h>
main()
{
	int n;
	
		printf("enter size of array:");
		scanf("%d",&n);
	
		int i,a[n];

		
			for(i=0;i<n;i++)
			
		{
			printf("enter value[%d] ",i);
			scanf("%d",&a[i]);
		
		}
		for(i=0;i<n;i++)
		{
		
		printf("%d\n",a[i]);
		}
}
	
