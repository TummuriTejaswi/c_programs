#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,k;
	printf("enter a number :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			
			for(j=1;j<=i;j++)
				printf("*");
			printf("\n");
		}
	
	for(i=2;i<=n;i++)
		{
			
			for(j=1;j<=n-i+1;j++)
				printf("*");
			printf("\n");
		}

	
		
}
