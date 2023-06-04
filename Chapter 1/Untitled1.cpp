#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct account {
    int account_no;
    char name[50];
    float balance;
    float transactions[100];
    int count;
} accounts[10];

void deposit(int account_no, float amount) {
    accounts[account_no].balance += amount;
    accounts[account_no].transactions[accounts[account_no].count] = amount;
    accounts[account_no].count++;
}

void withdraw(int account_no, float amount) {
    if (accounts[account_no].balance >= amount) {
        accounts[account_no].balance -= amount;
        accounts[account_no].transactions[accounts[account_no].count] = -amount;
        accounts[account_no].count++;
    } else {
        printf("Insufficient balance\n");
    }
}

void print_statement(int account_no) {
    printf("Account holder: %s\n", accounts[account_no].name);
    printf("Account number: %d\n", accounts[account_no].account_no);
    printf("Balance: %.2f\n", accounts[account_no].balance);
    printf("Transaction history:\n");
    for (int i = 0; i < accounts[account_no].count; i++) {
        printf("%.2f\n", accounts[account_no].transactions[i]);
    }
}

int main() {
    accounts[0].account_no = 100;
    strcpy(accounts[0].name, "John Smith");
    accounts[0].balance = 1000.0;
    accounts[0].count = 0;

    deposit(0, 500.0);
    withdraw(0, 200.0);
    print_statement(0);

    return 0;
}

