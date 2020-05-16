#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,k;
	printf("enter a number :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			
			for(j=1;j<=i-1;j++)
				printf(" ");
			for(k=1;k<=n-i+1;k++)
				printf("*");
			printf("\n");
		}
}
