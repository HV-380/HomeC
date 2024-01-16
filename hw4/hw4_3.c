#include <stdio.h>

int main(void)
{
	int num,a,b,d;    
    printf("Введите трехзначное целое положительное число : \n");
    scanf ("%d", &num);
    a= num/100;
    b= num/10 % 10;
    d= num % 10;
    if (a>b && a>d)
	   printf("%d", a);
	else {
	if (b>a && b>d)
	   printf("%d",b); 
    else 
	    printf("%d",d);
	}
	
	return 0;
}

