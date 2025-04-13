// Converting the tempearture from Centigrade to Farenheit degree
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in Centigrade:");
	scanf("%f",&c);
	f=32+((9*c)/5);
	printf("The temperature in Farenheit :%.2f",f);
	return 0;
}
