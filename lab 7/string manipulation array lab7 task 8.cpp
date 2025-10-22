#include <stdio.h>
int main()
{
	char str[100];
	printf("Enter a word:\n");
	scanf(" %s",str);
	printf("You entered  ---'%s'--- ",str);
	for(int i = 0;str[i] != '\0';i++)
	{
		switch(str[i])
		{
		case 'a' : str[i] = 'A';
		break;
		case 'e' : str[i] = 'E';
		break;
		case 'i' : str[i] = 'I';
		break;
		case 'o' : str[i] = 'O';
		break;
		case 'u' : str[i] = 'U';
		break;
		default  : printf("No vowels found\n");
		break;
	    }
 	}
 	printf("Your changed word is %s" ,str);
	return 0;
}
