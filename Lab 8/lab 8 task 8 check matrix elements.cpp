#include <stdio.h>
int main()
{
	int arr[3][3];
	int i,j;
	int evennum=0,oddnum=0,pnum=0,nnum=0,zero=0;
	int count = 1;
	printf("Enter your input in the 3x3 matrix:\n");
	printf("\n-----------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nEnter %d element:\n" ,count);
		scanf("%d" ,&arr[i][j]);
		if(arr[i][j] % 2 == 0)
		{
			printf("\nYour number is even\n");
			evennum+=1;
		}
		else
		{
			printf("Your number is odd\n");
			oddnum+=1;
		}
		if(arr[i][j] > 0 )
		{
			printf("\nYour number is Positive\n");
			pnum+=1;
		}
		else if(arr[i][j] < 0)
		{
			printf("\nYour number is negative\n");
			nnum+=1;
		}
		else
		{
			printf("\nYour numbewr is zero\n");
			zero+=1;
		}
		
		count+=1;
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
	printf("Number of even numbers are %d\n" ,evennum);
	printf("Number of odd numbers are %d\n" ,oddnum);
	printf("Number of positive numbers are %d\n" ,pnum);
	printf("Number of negative numbers are %d\n" ,nnum);
	printf("Number of zeros are %d" ,zero);
	
	return 0;
}
