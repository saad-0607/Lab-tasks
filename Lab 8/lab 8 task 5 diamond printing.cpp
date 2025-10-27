#include <stdio.h>
int main()
{
	int i,j,k,r,c;
	printf("Enter half of the rows of you want:\n");
	scanf("%d" ,&r);
	printf("\n");
	for(i=1;i<=r;i++)
	{
		
		for(j=1;j<=r-i;j++)
		{
			printf(" ");
		}
				for(k=1;k<=2*i-1;k++)
				{
					printf("*");
				}
		
		printf("\n");
	}
	
	for(i=r-1;i>=1;i--)
	{
		
		for(j=1;j<=r-i;j++)
		{
			printf(" ");
		}
				for(k=1;k<=2*i-1;k++)
				{
					printf("*");
				}
		
		printf("\n");
	}
	
	
	
	return 0;
}
