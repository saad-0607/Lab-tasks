#include <stdio.h>
int main()
{
	int num=0,i,prod=0;
	
	printf("Enter the number you want to find the table of:\n");
	scanf("%d" ,&num);
	
	for(i=1; i<=10;i++ )
	{
	
	 prod = num * i;
	
	 printf("%d x %d = %d\n" ,num,i,prod);
	
    }
	
	return 0;
}
