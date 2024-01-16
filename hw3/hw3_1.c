#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
int a,b,c;    
    setlocale(LC_ALL, "Rus");
    printf("Введите числа a,b,c : \n");
    scanf ("%d %d %d", &a,&b,&c);
    printf("%d + %d + %d = %d \n",a,b,c,a+b+c);
    return 0;
}

