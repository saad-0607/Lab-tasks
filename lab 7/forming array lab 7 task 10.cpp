#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter the size of array:\n");
	scanf("%d" ,&n);
	
	int arr[n];
	
	printf("Enter %d values of your will:\n" ,n);
	for(int i=0 ;i < n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	printf("Values entered are shown below\n");
	for(int i=0 ;i < n;i++)
	{
		printf("\n--%d--\n" ,arr[i]);
	}
	int a = n-1,indexval,newval;
	printf("Enter the index of element you want to change(from 0 to %d)\n",a);
	scanf("%d",&indexval);
	
	 if (indexval >= 0 && indexval < n) {
        printf("Enter the new value: ");
        scanf("%d", &newval);
	
	arr[indexval] = newval;
	
	printf("\nUpdated array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid index! Please restart the program.\n");
    }

    printf("\n");
	return 0;
}
