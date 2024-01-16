#include "stdio.h"

int main(void)
{
	int a, b, c;
	printf("Введите длину сторон треугольника\n");
	scanf ("%d%d%d", &a, &b, &c);
	printf("%s",(a + b > c) && (a + c > b) && (c + b > a) ? "YES" : "NO");

 	return 0;
}
