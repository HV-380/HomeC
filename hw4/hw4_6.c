#include <stdio.h>

int main(void)
{
	int a,b;
	printf("Введите два числа : \n");
    scanf ("%d%d",&a,&b);
   	printf("%s\n",(a > b) ? "Above" : (a = b) ? "Equal" : "Less");
	return 0;
}

