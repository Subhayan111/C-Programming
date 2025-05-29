// Student's grade using logical operators method-II
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,per;
	printf("Enter marks in 5 subjects:");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	per=(sub1+sub2+sub3+sub4+sub5)*100/500;
	if(per>=60)
		printf("First division\n");
	if((per>=50)&&(per<60))
		printf("Second division\n");
	if((per>=40)&&(per<50))
		printf("Third division\n");
	if(per<40)
		printf("Fail\n");
return 0;
}
