#include <stdio.h>
int main()
{
	int num=0,sum=0,total=0;
	char ch='y';
	
	
	
	while(ch == 'y')
	{
		printf("Enter a integer input:\n");
		scanf("%d" ,&num);
		
		sum += num;
		printf("Your updated total is:%d\n" ,sum);
		
		printf("Do you want to enter another number? y for yes and n for no:\n");
		scanf(" %c" ,&ch);
    }
		printf("The sum of numbers entered is:%d\n" ,sum);
	
	return 0;

}
