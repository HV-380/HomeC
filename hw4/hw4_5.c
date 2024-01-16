#include <stdio.h>

int main(void)
{
	int X1,X2,Y1,Y2;
	float k,b;    
    printf("Введите координаты точек X1 Y1 X2 Y2 : \n");
    scanf ("%d%d%d%d", &X1, &Y1, &X2,&Y2);
    k = (float)(Y1 - Y2) / (X1 - X2);
    b = (float)Y2 - k * X2;
	printf("%.2f %.2f\n", k, b);
	return 0;
}

