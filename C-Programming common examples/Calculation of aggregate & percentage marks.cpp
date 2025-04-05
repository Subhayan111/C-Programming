// Calculation of aggregate & percentage marks
#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,aggr;
float per;
printf("Enter marks in 5 subjects:");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
aggr=sub1+sub2+sub3+sub4+sub5;
per=(aggr*100)/500;
printf("\nAggregate marks=%d",aggr);
printf("\nPercentage marks=%.2f",per);
return 0;
}
