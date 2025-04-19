// Calculation profit or loss
#include<stdio.h>
int main()
{
	float p,l,cp,sp;
	printf("Enter the cost price & the selling price:");
	scanf("%f%f",&cp,&sp);
	p= sp-cp;
	l=cp-sp;
	if(p>0)
		printf("The seller made a profit of Rs.%.2f\n",p);
	if(l>0)
		printf("The seller incurred loss of Rs.%.2f\n",l);
	if(p==0)	
		printf("There is no profit,no loss\n",p);
	return 0;
}

