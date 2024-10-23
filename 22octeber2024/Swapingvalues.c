//Bhargab Rudra Kalita
//swapping two values using pointers

#include <stdio.h>
#include<conio.h>

void swap_by_reference(int *x, int *y) 
{
    int temp;
    temp = *x;   
	*x = *y;     
    *y = temp;   
}

void swap_by_value(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

main() 
{
    int a, b;
    printf("\nEnter value for a:");
    scanf("%d",&a);
    printf("\nEnter value for b:");
    scanf("%d",&b);

    printf("\nOriginal values:");
    printf("\na = %d, b = %d", a, b);

    
    swap_by_value(a, b);
    printf("\nAfter swap by value:");
    printf("\na = %d, b = %d", a, b);


    swap_by_reference(&a, &b);
    printf("\nAfter swap by reference:");
    printf("\na = %d, b = %d", a, b);

    return (0);
}
