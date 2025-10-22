#include <stdio.h>
int main()
{
	int gradenum=0;
	int avg=0, acount=0, bcount=0, ccount=0,tcount=0;
	int grade=0,total=0;
	
	do
	{
		printf("Enter your grade marks(1-100):\n");
		scanf("%d" ,&gradenum);
		
		if(gradenum > 70)
		{
			acount++;
	    }
		else if (gradenum >= 50 && gradenum <= 70)
		{
			bcount++;
		}
		else(gradenum < 50);
		{
			ccount++;
		}
        total += gradenum;
		
		printf("Do you want to continue.Enter 1 for yes and -1 for no\n");
		scanf("%d" ,&grade);
		
		}while(grade != -1);
		
		tcount = acount + bcount + ccount;
		avg = total/tcount;
		
		printf("The total grades entered are %d and \ngrades>70=%d\n50>= grades <=70 =%d\ngrades<50=%d\n",tcount, acount,bcount,ccount);
		printf("The average grades are %d" ,avg);
		
		return 0;
	
	
	
	
}
 












