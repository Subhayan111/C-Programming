// Conversion of distance
#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;
	printf("\nEnter the distance in kilometers:");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	ft=inch/12;
	printf("\nDistance in meter=%f",m);
	printf("\nDistance in centimeter=%f",cm);
	printf("\nDnter the distance in inch=%f",inch);
	printf("\nDistance in feet =%f",ft);
	return 0;
}
