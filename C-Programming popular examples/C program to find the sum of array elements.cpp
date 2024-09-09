// C program to find the sum of array elements

#include<stdio.h>
int main()
{
    //let's assume the maximum array size as 100.
    //initialize sum as 0. Otherwise,it will take some garbage value.
    int arr[100], size, i, sum = 0;
    
    printf("Enter array size:");
    scanf("%d",&size);
    
    printf("Enter array elements:");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    printf("Sum of the array = %d\n",sum);
    return 0;
}
