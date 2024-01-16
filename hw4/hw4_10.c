#include <stdio.h>

int main(void)
{
	int a;
	printf("Введите номер месяца:\n");
	scanf ("%d", &a);
	switch (a)
	{
		case 12:case 1:case 2:	
		     printf ("Winter");
	    break;	
		case 3:case 4:case 5:	
		     printf ("Spring");
		break;
		case 6:case 7:case 8:	
		     printf ("Summer");
		break;
		case 9:case 10:case 11: 
		     printf ("Autumn");
		break;
	}
	return 0;
}
