#include <stdio.h>
int main()
{
	int a[5],b[5],final[10];
	int i,j;
	
	printf("The group users should enter the estimate population of karachi according to them( 'in millions' ):\n");
	for(i=0;i<5;i++)
	{
	scanf("%d" ,&a[i]);
    }
    printf("The group users should enter the expected population of karachi according to them( 'in millions' ):\n");
	for(i=0;i<5;i++)
	{
	scanf("%d" ,&b[i]);
    }
    for(i=0;i<5;i++)
    {
    	final[i] = a[i];
	}
	for(j=0;j<5;j++)
	{
		final[i+j] = b[j];
	}
	printf("\nMerged Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", final[i]);
    }
	return 0;
}
