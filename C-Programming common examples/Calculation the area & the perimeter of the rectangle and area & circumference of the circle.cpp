// Calculation the area & the perimeter of the rectangle and area & circumference of the circle
#include<stdio.h>
int main()
{
	float l,b,ar,pr,r,ac,cc;
	
	//Calculation the area & the perimeter of the rectangle
	printf("Enter the length of the rectangle:");
	scanf("%f",&l);
	printf("\nEnter the breadth of the rectangle:");
	scanf("%f",&b);
	ar=l*b;
	printf("\nArea of the rectangle=%.2f",ar);
	pr=2*(l+b);
	printf("\nPerimeter of the rectangle=%.2f",pr);
	
	// Calculation the area & circumference of the circle
	printf("\n\nEnter the radius of the circle:");
	scanf("%f",&r);
	ac=3.14*r*r;
	printf("\nArea of the circle=%.2f",ac);
	cc=2*3.14*r;
	printf("\nCircumference of the circle=%.2f",cc);
	
return 0;	
}
