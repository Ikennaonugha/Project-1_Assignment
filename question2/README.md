Sample Output and Input:

<img width="963" height="435" alt="image" src="https://github.com/user-attachments/assets/f5a9048d-c133-473f-a7e9-d9423bcb1c63" />

Explanation of Control Structures

Conditionals (if-else / switch): The switch(choice) block routes execution based on user selection. Nested if conditions evaluate whether transaction conditions are met (e.g., verifying amount > balance).

Loops (while): An infinite loop (while(1)) keeps the transaction terminal active, allowing continuous operations until menu option 5 is selected.

continue Statement: When an invalid entry occurs (such as negative funds or insufficient balance), continue immediately jumps back to the menu prompt, bypassing balance adjustments and counter increments.

break Statement: Used in the switch block to exit the switch structure after a successful operation without falling through to subsequent cases.
