
#include<stdio.h>
#include<conio.h>
void main()
{
	float da,hr,gr,bs;
	printf("Enter basic salary:\n");
	scanf("%f",&bs);
	da=(bs*40)/100;
	hr=(bs*20)/100;
	gr=da+bs+hr;
	
	printf("Gross salary is %f",gr);
}

