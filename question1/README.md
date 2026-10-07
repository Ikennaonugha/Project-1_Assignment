## Overview

This component of the monitoring system is an embedded C program developed for an Arduino-compatible environment to process real-time sensor readings before transmitting them to a central monitoring unit. The system reads temperature ($^\circ\text{C}$) and turbidity ($\text{NTU}$) levels, calculates a Water-Quality Index (WQI), and classifies the water status as **Good**, **Warning**, or **Critical**.

## Compilation and Execution

### Using GCC (Command Line)

1. Navigate to the `question1` directory:
```bash
cd question1

```


2. Compile the source file:
```bash
gcc -g question1.c -o question1

```


3. Run the executable:
```bash
./question1

```
---

## Sample Program Output

```text
Enter temperature (in Celsius): 28.5
Enter turbidity (in NTU): 12

WATER QUALITY MONITORING REPORT   


Temperature Deviation: 3.50 C
Turbidity Penalty: 6.00 NTU
Calculated WQ Index: 90.50
Water Quality Status: Good

```

---

## Technical Explanations

### a. Real-World Application

* **Application:** Engine Control Units (ECUs) in automotive engineering.
* **Why C is Suitable:** C provides low-level memory manipulation without garbage collection pauses. It enables microcontrollers to read sensor data under strict constraints.

### b. Error Analysis

* **Syntax Error Example:** Missing a terminating semicolon `;` at the end of a statement because syntax errors occur when code violates the grammar and structural rules.


* **Semantic Error Example:** Using integer division instead of floating-point division when variables are declared as integers because semantic errors compile without errors but program produces inaccurate outputs.



### c. Compilation Lifecycle

* **1. Preprocessing (`.c` → `.i`)**
* **Input:** Raw source code (`question1.c`).
* **Output:** Expanded source code with headers resolved and macros expanded.


* **2. Compilation (`.i` → `.s`)**
* **Input:** Preprocessed source code (`question1.i`).
* **Output:** Assembly code (`question1.s`).


* **3. Assembly (`.s` → `.o` / `.obj`)**
* **Input:** Assembly code (`question1.s`).
* **Output:** Machine code object file (`question1.o`).


* **4. Linking (`.o` → Executable Binary)**
* **Input:** Object file and standard C library binaries.
* **Output:** Executable binary file (`./question1`).
