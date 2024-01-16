#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
int num,a,b,c;    
    setlocale(LC_ALL, "Rus");
    printf("Введите трехзначное целое положительное число : \n");
    scanf ("%d", &num);
    a= num/100;
    b= num/10 % 10;
    c= num % 10;
    printf("%d \n",a*b*c);
    return 0;
}

