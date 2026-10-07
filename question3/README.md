Sample input and output:
<img width="743" height="189" alt="image" src="https://github.com/user-attachments/assets/52b0f17f-bdab-4237-bdb0-4b1b10370ab1" />

Modular Program Structure

The array values are parsed in helper functions (calculate_total, find_longest_route, count_routes_above_limit), keeping main() focused on displaying results. calculate_average() shows function integration by using the output of calculate_total().

How the Recursive Function Works

Base Case: if (size <= 0) return 0; prevents infinite execution and stops recursion when all array elements are processed.

Recursive Step: distances[size - 1] + recursive_sum(distances, size - 1); Each call reduces size by 1, towards the base case.

Advantage and Limitation of Recursion

Advantage: Expresses problems with sub-problems cleanly with minimal code.

Limitation: Overhead from call stack allocation and higher memory consumption compared to an iterative loop.
