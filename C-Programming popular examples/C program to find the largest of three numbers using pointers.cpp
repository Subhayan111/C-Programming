// C program to find the largest of three numbers using pointers 

#include<stdio.h>
int main()
{
 int a,b,c,*pa, *pb, *pc;

 printf("Enter three numbers:");
 scanf("%d%d%d", &a,&b,&c);
 
 pa= &a;
 pb= &b;
 pc= &c;
 if(*pa > *pb && *pa > *pc)
 {
  printf("Largest is: %d", *pa);
 }
 else if(*pb > *pc && *pb > *pc)
 {
  printf("Largest is : %d", *pb);
 }
 else
 {
  printf("Largest = %d", *pc);
 }
 return 0;
}
