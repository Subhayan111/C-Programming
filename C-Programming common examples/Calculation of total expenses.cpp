// Calculation of total expenses 
#include<stdio.h>
int main()
{
	int qty,dis;
	float rate,total;
	printf("Enter quantity and rate:");
	scanf("%d%f",&qty,&rate);
	if(qty>1000)
	{
		dis=10;
		printf("Congratulations,you get a discount of 10 percent.\n");
	}
	else
		dis=0;
	total=(qty*rate)-(qty*rate*dis/100);
	printf("Total expenses=Rs.%.2f",total);
	return 0;
}

