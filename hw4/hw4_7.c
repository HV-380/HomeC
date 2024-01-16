#include <stdio.h>

int main(void)
{
	int max,a,b,c,d,e;
	printf("Введите пять чисел : \n");
    scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
    max = (a > b) && (a > c) ? a : (b > c) ? b : c;
	max = (max > d) && (max > e) ? max : (d > e) ? d : e;

	printf("%d\n", max);
   	
	return 0;
}


