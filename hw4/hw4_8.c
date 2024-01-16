#include <stdio.h>

int main(void)
{
	int min,a,b,c,d,e;
	printf("Введите пять чисел : \n");
    scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min = (a < b) && (a < c) ? a : (b < c) ? b : c;
	min = (min < d) && (min < e) ? min : (d < e) ? d : e;

	printf("%d\n", min);
   	
	return 0;
}


