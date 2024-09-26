//assignment 2: to find the largest of three numbers using a function
// bhargab rudra kalita,rollno 32, 26 sept 2024
#include <stdio.h>
int findLargest(int a, int b, int c) {
    int largest = a; 
    
    if (b > largest) {
        largest = b; 
    }
    
    if (c > largest) {
        largest = c;
    }
    
    return largest;
}

int main() {
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);

    int largest = findLargest(num1, num2, num3);

    printf("The largest of the three numbers is: %d\n", largest);

    return 0;
}
