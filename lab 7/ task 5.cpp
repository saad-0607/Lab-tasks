#include <stdio.h>
int main()
{
	char grd[11];
	int i,j,a,sum=0;
	float avg=0;
	int max = 0;
	int min = 0;
	for(i=0;i<10;i++)
	{
		a=i+1;
		printf("Enter student's %d grade('A-F',E not included.):\n" ,a);
		scanf(" %c" ,&grd[i]);
	}
	printf("Grades of each student entered are:\n");
	for(i=0;i<10;i++)
	{
		printf(" (%c)" ,grd[i]);
	}
	for(i=0;i<10;i++)
	{
		switch(grd[i])
		{
			case 'A' : case 'a' : sum+=4;
			break;
			case 'B' : case 'b' : sum+=3;
			break;
			case 'C' : case 'c' : sum+=2;
			break;
			case 'D' : case 'd' : sum+=1;
			break;
			case 'F' : case 'f' : sum+=0;
			break;
			default : printf("Invalid input\n");
			break;
		}	
	}
	avg = sum/10;
	printf("The average GPA is %.2f\n" ,avg);
	for(i=0;i<10;i++)
	{
	if(grd[i] > grd[max])
	{
		max = i;
	}
	if(grd[i] < grd[min])
	{
		min = i;
	}
    }
    printf("\nThe highest grade is %c at index(%d) and the lowest is %c at index(%d).\n" ,grd[max],max,grd[min],min);
    grd[min] = 'A';
    for(i=0;i<10;i++)
    {
    printf("\nThe updated grades of all students:\n");
    printf("Student %d: %c\n", i + 1, grd[i]);
    }   
	return 0;
}










