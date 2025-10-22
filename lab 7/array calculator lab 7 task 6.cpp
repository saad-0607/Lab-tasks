#include <stdio.h>
int main()
{
	int mainarr[5],sum[5],diff[5],prod[5];
	int i,a=0,j;
	for(i = 0; i <= 4;i++)
	{
		a=i+1;
		printf("Enter integer value %d for further calculation:\n" ,a);
		scanf("%d" ,&mainarr[i]);
	}
	for(i = 0; i <= 4;i++)
	{
		sum[i] = mainarr[i] + 10;
		diff[i] = mainarr[i] - 5;
		prod[i] = mainarr[i] * 2;
	}
	printf("\n-------------------------------------------\n");
	printf("\n Sr.no | Original | Sum | Difference | Product |");
	printf("\n-------------------------------------------\n");
	for(i = 0; i <= 4;i++)
	{
		printf("%d   |   %d   |  %d  |     %d     |    %d    |\n" ,i+1,mainarr[i],sum[i],diff[i],prod[i]);
	}
	printf("\n-------------------------------------------\n");
	return 0;
}
