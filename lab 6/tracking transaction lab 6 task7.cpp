#include <stdio.h>
int main()
{
	int ibal=5000,ubal=0,fbal=0,dcount=0,wcount=0,bal=0;
	int stop=0;
	
	do
	{
		printf("Your initial balance is %d\n" ,ibal);
		printf("Enter the amount you want to deposit or withdraw(- sign for withdraw):\n");
		scanf("%d" ,&bal);
		
		if(bal < 0)
		{
			wcount++;
		}
		else(bal > 0);
		{
			dcount++;
		}
		 ibal += bal;
		printf("The updated balance is :%d\n" ,ibal);
		printf("Do you want to further continue with your transaction.If yes type 0 and if no type 1\n");
		scanf("%d" ,&stop);
	}while(stop == 0);
		
	fbal = ibal;	
	printf("Your final balance is :%d\n" ,fbal);
	printf("You made %d deposits and %d withdraws" ,dcount,wcount);
		
		return 0;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

