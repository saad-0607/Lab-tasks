#include <stdio.h>
int main()
{
	int r=0,c=0,i,j,k,num=0;
	
	printf("Enter the amount of rows you want to print:\n");
	scanf("%d" ,&r);
	c = r ;
	
	for(i=0;i<r;i++)
	{
		num=1;
		for(j=0;j<c-i-1;j++)
		{
			printf(" ");}
			
			for(j=0;j<=i;j++)
			{
			printf("%d " ,num);
			 num = num * (i - j) / (j + 1);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
