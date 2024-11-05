//Bank Account management system
//Bhargab Rudra Kalita
//Roll No-32
//Assignment 4
//5-11-2024
#include <stdio.h>

struct BankAccount {
    char name[50];
    int accountNumber;
    float balance;
    char accountType;  
    union {
        float interestRate;    
        float overdraftLimit;  
    } accountDetails;
};

int main() {
    struct BankAccount account;

    
    printf("Enter account holder's name: ");
    scanf(" %[^\n]s", account.name);
    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);
    printf("Enter account balance: ");
    scanf("%f", &account.balance);
    printf("Enter account type (S for Savings, C for Current): ");
    scanf(" %c", &account.accountType);

    if (account.accountType == 'S') {
        printf("Enter interest rate: ");
        scanf("%f", &account.accountDetails.interestRate);
    } else if (account.accountType == 'C') {
        printf("Enter overdraft limit: ");
        scanf("%f", &account.accountDetails.overdraftLimit);
    } else {
        printf("Invalid account type!\n");
        return 1;
    }

    printf("\nAccount Details:\n");
    printf("Name: %s\n", account.name);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Balance: %.2f\n", account.balance);

    if (account.accountType == 'S') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.accountDetails.interestRate);
    } else {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.accountDetails.overdraftLimit);
    }

    return 0;
}
