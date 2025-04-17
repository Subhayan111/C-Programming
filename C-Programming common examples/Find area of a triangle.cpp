// Find area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,sp,area;
	printf("Enter sides of a triangle:");
	scanf("%f%f%f",&a,&b,&c);
	
	sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));	
	
	if((a+b)>c)
	{
		printf("The sides form a triangle.\n");
		printf("Area of the triangle=%.2f\n",area);
    }
	else
	{
		printf("Please enter valid sides.\n");
	}
	return 0;
}
