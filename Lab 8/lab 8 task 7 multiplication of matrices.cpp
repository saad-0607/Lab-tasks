#include <stdio.h>
int main()
{
	int i,j,k,r,c,count1=1,count2=1;
	printf("How many rows do you want (2 or 3):\n");
	scanf("%d" ,&r);
	printf("How many coloumns do you want (must be same as rows):\n");
	scanf("%d" ,&c);
	int arr[r][c],brr[r][c];
	
	printf("\n------------------------\n");
	
	printf("Input first array:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\nEnter %d element:\n" ,count1);
		scanf("%d" ,&arr[i][j]);
		count1++;
	}
	}
	printf("Your first array input is:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf(" %d" ,arr[i][j]);
	}
	printf("\n");
	}
		printf("\n------------------------\n");
		
	printf("Input second array:\n");
	for(i=0;i<r;i++)
	
	{
		for(j=0;j<c;j++)
		{
		printf("\nEnter %d element:\n" ,count2);
		scanf("%d" ,&brr[i][j]);
		count2++;
	}
	}
	
	printf("Your second array input is:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf(" %d" ,brr[i][j]);
	}
	printf("\n");
	}
	int result[r][c];
	printf("\n-------------------------------\n");
	printf("The product of these 2 matrices is:\n ");
	
	int count3=1;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			result[i][j] = arr[i][j] * brr[i][j];
			for(k=0;k<3;k++);
			{
					printf("\nelement %d of result array is: %d\n",count3,result[i][j]);
			}
		}
	}
	
	printf("Your product array result is:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf(" %d" ,result[i][j]);
	}
	printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
