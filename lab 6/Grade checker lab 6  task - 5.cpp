#include <stdio.h>
int main()
{
	int num;
	char grade;
	
	printf("Enter the course number(1,2 or 3):\n");
	scanf("%d", &num);
	
	switch(num)
	{
	
	case 1:
	case 2:
	case 3:
	
	       printf("Enter grade (A,B,C,D,F):\n");
	       scanf(" %c" ,&grade);
	         
		   switch(grade)
	 {  
	       case 'A':
	       		printf("Superb you got a A grade in %d course\n" ,num);
			    break;
	       case 'B':
	       		printf("Well done you got a B grade in %d course\n" ,num);
			    break; 
	       case 'C':
	       	    printf("Fair, You got a C in %d course\n" ,num);
	       	    break;  
	       case 'D':
		        printf("Poor performance, You got a D in %d course\n" ,num);	    
	            break;
	       case 'F':
	       	    printf("You failed your %d course\n" ,num);
	            break;
	    default:	
	    	    printf("Invalid grade for course entered\n");
	    	    break;
}
	default:
		   printf("Enter value from given number.\n");
		   break;
	}	
	return 0;
}
