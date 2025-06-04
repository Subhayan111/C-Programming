// Calculation of simple interest for 3 sets of p,n,r using while loop
#include<stdio.h>
int main()
{
	int p,n,count;
	float r,si;
	count=1;
	while(count<=3)
	{
		printf("Enter values of p,n,r:");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("Simple interest=%.2f\n",si);
		count=count+1;
	}
return 0;
}
