#include "stdio.h"

int main(void)
{
	int a, b, c;
	
	printf("Введите три числа:\n");
	scanf ("%d%d%d", &a, &b, &c);
	printf("%s",(a<=b)&&(b<=c)? "YES" : "NO");

 	return 0;
}
