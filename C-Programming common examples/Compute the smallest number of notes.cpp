// Compute the smallest number of notes
#include<stdio.h>
int main()
{
	int amount,nthun,ntfifty,ntten,ntfive,nttwo,ntone,total;
	printf("Enter the amount:");
	scanf("%d",&amount);
	nthun=amount/100;
	amount=amount%100;
	ntfifty=amount/50;
	amount=amount%50;
	ntten=amount/10;
	amount=amount%10;
	ntfive=amount/5;
	amount=amount%5;
	nttwo=amount/2;
	amount=amount%2;
	ntone=amount/1;
	amount=amount%1;
	total=nthun+ntfifty+ntten+ntfive+nttwo+ntone;
	printf("Smallest number of notes:%d\n",total);
	return 0;
}
