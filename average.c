//find average of 1D array

#include<stdio.h>
main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int sum=0;
	float avg;
	
	for(i=0;i<n;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
		sum=sum+a[i];
	}
		printf("sum: %d\n",sum);
	
	avg=sum/i;
	printf("average=%f",avg);
	}
	
	
