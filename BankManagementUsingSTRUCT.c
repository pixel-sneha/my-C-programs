#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char ownerName[30];
    float balance;
    int transactionCount;
};


void depositMoney(struct BankAccount *account, float amount) {
    account->balance += amount;
    account->transactionCount++;
    printf("Deposit successful. New balance: %.2f\n", account->balance);
}


void withdrawMoney(struct BankAccount *account, float amount) {
    if (amount > account->balance) {
        printf("Insufficient funds. Current balance: %.2f\n", account->balance);
    } else {
        account->balance -= amount;
        account->transactionCount++;
        printf("Withdrawal successful. New balance: %.2f\n", account->balance);
    }
}


void displayAccount(struct BankAccount *account) {
    printf("Account Information:\n");
    printf("Account Number: %d\n", account->accountNumber);
    printf("Owner: %s\n", account->ownerName);
    printf("Balance: %.2f\n", account->balance);
    printf("Transactions: %d\n", account->transactionCount);
}

int main() {
    
    int accountNum;
    char ownerName[30];
    float initialBalance;
    float depositAmount;
    float withdrawAmount;
    
    scanf("%d", &accountNum);
    scanf("%s", ownerName);
    scanf("%f", &initialBalance);
    scanf("%f", &depositAmount);
    scanf("%f", &withdrawAmount);
    
    // Creating BankAccount variable and initialize it
    struct BankAccount account;
    account.accountNumber = accountNum;
    strcpy(account.ownerName, ownerName);
    account.balance = initialBalance;
    account.transactionCount = 0;
    
    // Calling displayAccount to show initial state
    displayAccount(&account);
    
    // Calling depositMoney with deposit amount
    depositMoney(&account, depositAmount);
    
    // Calling withdrawMoney with withdrawal amount
    withdrawMoney(&account, withdrawAmount);
    
    //  to show final state
    displayAccount(&account);
    
    return 0;
}
