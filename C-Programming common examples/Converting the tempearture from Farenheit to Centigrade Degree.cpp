// Converting the tempearture from Farenheit to Centigrade Degree
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in Farenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The temperature in Centigrade:%.2f",c);
	return 0;
}
