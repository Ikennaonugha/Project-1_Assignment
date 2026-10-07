Sample Output and Input:

MOBILE MONEY TRANSACTION SYSTEM

1. Deposit
2. Withdraw
3. Check Balance
4. Transaction Summary
5. Exit
Enter choice: 1
Enter deposit amount: 50000
Deposit successful.
Current balance: 50000 RWF

MOBILE MONEY TRANSACTION SYSTEM

1. Deposit
2. Withdraw
3. Check Balance
4. Transaction Summary
5. Exit
Enter choice: 2
Enter withdrawal amount: 70000
Transaction rejected: Insufficient balance.

MOBILE MONEY TRANSACTION SYSTEM

1. Deposit
2. Withdraw
3. Check Balance
4. Transaction Summary
5. Exit
Enter choice: 3
Current balance: 50000 RWF

MOBILE MONEY TRANSACTION SYSTEM

1. Deposit
2. Withdraw
3. Check Balance
4. Transaction Summary
5. Exit
Enter choice: 5
Exited.


Explanation of Control Structures
Conditionals (if-else / switch): The switch(choice) block routes execution based on user selection. Nested if conditions evaluate whether transaction conditions are met (e.g., verifying amount > balance).

Loops (while): An infinite loop (while(1)) keeps the transaction terminal active, allowing continuous operations until menu option 5 is selected.

continue Statement: When an invalid entry occurs (such as negative funds or insufficient balance), continue immediately jumps back to the menu prompt, bypassing balance adjustments and counter increments.

break Statement: Used in the switch block to exit the switch structure after a successful operation without falling through to subsequent cases.
