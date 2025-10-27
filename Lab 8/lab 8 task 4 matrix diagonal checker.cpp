#include <stdio.h>
int main()
{
	int arr[3][3];
	int i,j,count1=1,count2=1,count=1;
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

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			
			 if(i > j && arr[i][j] != 0) 
			 
                count1=0;
                
            if(i < j && arr[i][j] != 0) // element above main diagonal
                count2=0;
                
            }
		}
		
	if(count1 == 1 && count2 == 0)
	{
		printf("Matrix is Upper Triangular.\n");
	}
	else if (count1 == 0 && count2 == 1)
	{
		printf("Matrix is lower Triangular.\n");
	}
	else if(count1==1  && count2==1 )
	{
		printf("Matrix is diagonal.\n");
	}
	else
	{
		printf("Matrix is neither upper or lower triangle.");
	}
    return 0;	
}
