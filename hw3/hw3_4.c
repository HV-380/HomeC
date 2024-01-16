#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
int a,b,c; 
float d;   
    setlocale(LC_ALL, "Rus");
    printf("Введите числа a,b,c : \n");
    scanf ("%d %d %d", &a,&b,&c);
    printf("%.2f \n",d = ((a+b+c)/3));
    return 0;
}

