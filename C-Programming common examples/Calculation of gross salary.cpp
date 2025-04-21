// Calculation of gross salary
#include<stdio.h>
int main()
{
	float bs,da,hra,gs;
	printf("Enter basic salary:");
	scanf("%f",&bs);
	if (bs<1500)
	{
		hra=bs*0.1;
		da=bs*0.9;
	}
	else
	{
		hra=500;
		da=bs*0.98;
	}
	gs=bs+da+hra;
	printf("Gross salary is=%.2f\n",gs);
	return 0;
}
