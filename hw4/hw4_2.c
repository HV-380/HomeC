#include <stdio.h>

int main(void)
{
	int a,b,d;
	printf("Vvtdite tri chisla \n");
	scanf("%d%d%d",&a,&b,&d);
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

