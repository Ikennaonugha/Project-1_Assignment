#include <stdio.h>

int main(void) {
    int choice;
    double balance = 0.0;
    double amount;
    int deposit_count = 0;
    int withdrawal_count = 0;

    while (1) {
        printf("\nMOBILE MONEY TRANSACTION SYSTEM\n\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Transaction Summary\n");
        printf("5. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid selection! Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Transaction rejected: Deposit amount must be positive.\n");
                    continue;
                }
                balance += amount;
                deposit_count++;
                printf("Deposit successful.\nCurrent balance: %.0f RWF\n", balance);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Transaction rejected: Invalid amount.\n");
                    continue;
                }
                if (amount > balance) {
                    printf("Transaction rejected: Insufficient balance.\n");
                    continue;
                }
                balance -= amount;
                withdrawal_count++;
                printf("Withdrawal successful.\nCurrent balance: %.0f RWF\n", balance);
                break;

            case 3:
                printf("Current balance: %.0f RWF\n", balance);
                break;

            case 4:
                printf("\nTransaction Summary\n\n");
                printf("Successful Deposits  : %d\n", deposit_count);
                printf("Successful Withdrawals: %d\n", withdrawal_count);
                break;

            case 5:
                printf("Exited.\n");
                return 0;

            default:
                printf("Invalid option! Please select 1 through 5.\n");
                continue;
        }
    }

    return 0;
}