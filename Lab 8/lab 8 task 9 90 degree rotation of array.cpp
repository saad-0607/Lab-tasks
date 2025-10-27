#include <stdio.h>
int main()
{
	int arr[3][3],brr[3][3],r[3][3];
	int i,j,count=1;
	printf("Enter your input in the 3x3 matrix:\n");
	printf("\n-----------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nEnter %d element:\n" ,count);
		scanf("%d" ,&arr[i][j]);
		count++;
	}
	}
	printf("Your array input is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d" ,arr[i][j]);
	}
	printf("\n");
	}
	printf("\nThe transpose of your array is:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			brr[j][i] = arr[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d" ,brr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			r[i][j] = brr[i][2-j];
		}
	}
	printf("THe rotated array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d" ,r[i][j]);
		}
		printf("\n");
	}
	return 0;
}
