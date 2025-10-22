#include <stdio.h>
int main()
{
	int num=0,lnum,snum,newnum=0;
	int first=1;
	char ch='Y';
	
	do
	{
		printf("Enter your number:\n");
		scanf("%d" ,&newnum);
		
		if(first)
		{
			lnum = snum = newnum;
            first = 0;
		}
		else if(newnum < snum)
		{
			snum = newnum;
		}
		else(newnum > lnum);
		{
			lnum = newnum;
		}
	    newnum=0;
		printf("The largest  number is: %d\n" ,lnum);
		printf("The smallest number is: %d\n" ,snum);
		printf("Do you want to continue?(Y/N):\n");
		scanf(" %c",&ch);
	}while(ch == 'Y');
	
	printf("The largest number is: %d\n" ,lnum);
	printf("The smallest number is: %d\n" ,snum);
	
	
	return 0;

}
