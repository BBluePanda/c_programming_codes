//assignment 1: simple calculator
// bhargab rudra kalita, 26sept 24
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

void subtract(int a, int b) {
    printf("The result of subtraction is: %d\n", a - b);
}

int multiply() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

void divide() {
    int a, b;
    printf("Enter two numbers to divide (numerator denominator): ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("The result of division is: %.2f\n", (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice, num1, num2;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%d %d", &num1, &num2);
            printf("The result of addition is: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%d %d", &num1, &num2);
            subtract(num1, num2);
            break;
        case 3:
            printf("The result of multiplication is: %d\n", multiply());
            break;
        case 4:
            divide();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
