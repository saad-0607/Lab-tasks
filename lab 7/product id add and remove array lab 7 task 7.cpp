#include <stdio.h>
int main()
{
	int ID[10],i,a,remID=0,j;
	
	for(i = 0; i < 10 ;i++)
	{
		a=i+1;
		printf("Enter ProductID No:%d\t('Must be 3 integer digits.')\n" ,a);
		scanf("%d" ,&ID[i]);
	}
	printf("Which of the following ProductID would you like to remove.\n");
	scanf("%d" ,&remID);
	int size =10;
	for(i=0;i<size;i++)
	{
		if(ID[i] == remID)
		{
			for(j=0 ; j<size-i;j++)
			{
				ID[j] = ID[j+1];
			}
			size--;
			i--;
		}
	}
	printf("Updated ProductID are:\n");
	for (i = 0; i < size; i++) {
        printf("%d ", ID[i]);
    }
	return 0;
}
