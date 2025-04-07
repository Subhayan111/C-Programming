// Calculation of gross salary
#include<stdio.h>
int main()
{
	float bp,da,hra,grpay;
	scanf("%f",&bp);
	da=bp*0.4;
	hra=bp*0.2;
	grpay=bp+da+hra;
	printf("Dearness Allowance=%f\n",da);
	printf("House Rent Allowance=%f\n",hra);
	printf("Gross pay of Ramesh=%f\n",grpay);
	return 0;
}
