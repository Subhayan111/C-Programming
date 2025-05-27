// Student's grade using logical operators method-I
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,per;
	printf("Enter marks in 5 subjects:");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	per=(sub1+sub2+sub3+sub4+sub5)*100/500;
	if(per>=60)
		printf("First division\n");
	else
	{
		if(per>=50)
			printf("Second division\n");
		else
		{
			if(per>=40)
				printf("Third division\n");
			else
				printf("Fail\n");	
		}	
	}	
return 0;
}
