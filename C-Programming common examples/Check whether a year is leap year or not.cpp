// Check whether a year is leap year or not
#include<stdio.h>
int main()
{
	int yr;
	printf("Enter a year:");
	scanf("%d",&yr);
	if(yr%100==0)
	{
		if(yr%400==0)
			printf("It is a Leap year");
		else
			printf("It is not a Leap year");
	} 
	else
	{
		if(yr%4==0)
			printf("It is a Leap year");
		else
			printf("It is not a Leap year");
	}
return 0;
}
