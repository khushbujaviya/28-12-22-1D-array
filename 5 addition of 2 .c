//peform addition of two 1D array&stor it in to another

#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter number:");
	scanf("%d",&n);

	
	int i,j;
	int a[n];
	int b[n];
	int c[n];

	{
	
	for(i=0;i<n;i++)
		{
		printf("enter number:[%d]",i);
		scanf("%d",&a[i]);
		}
	for(j=0;j<n;j++)
		{
		printf("enter number[%d]",j);
		scanf("%d",&b[j]);
		}
	for(i=0;i<n;i++)
	{
		c[n]=a[i]+b[i];
    printf("%d\n",c[n]);
}
    printf("\n");
}
}
    
	


	
