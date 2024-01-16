#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
int a,b;    
    setlocale(LC_ALL, "Rus");
    printf("Введите числа a,b : \n");
    scanf ("%d %d", &a,&b);
    printf("%d \n",a-b);
    return 0;
}

