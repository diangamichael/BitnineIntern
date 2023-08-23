# BitnineIntern
 Internship coding Test

How to run Question 2

Solving Recurrence Relation F(n) = F(n-3) + F(n-2)

Development Environment:
- Language: C
- Compiler: Any C compiler (e.g., GCC)

How to Compile and Run:
1. Open a text editor and paste the desired approach code from below.

2. Save the code in a file with a ".c" extension, for example: `recursive.c` or`memoization.c` or`bottomup.c` .

3. Open a terminal window.

4. Navigate to the directory containing the saved source code file using the 'cd' command: cd /path/to/source/code


5. Compile the source code using a C compiler (e.g., GCC):
gcc -o recurrence_solution recursive.c or memoization.c or bottomup.c 


6. Run the compiled executable:
./recurrence_solution


7. The program will execute the solution for the recurrence relation and display the calculated result for the given value of 'n'.

Note: Make sure you have a C compiler installed on your system. If you don't have one, you can install GCC (GNU Compiler Collection) or an equivalent compiler for your platform.


Differences, Advantages, and Disadvantages:

Recursive Function Approach:

Advantages: 
1. Simple and easy to understand.
Disadvantages: 
1. Inefficient for large values of n due to repeated calculations (exponential time complexity).

Memoization (Top-down Dynamic Programming) Approach:

Advantages: 
1. Improves efficiency by avoiding redundant calculations. 
2. Suitable for larger values of n.
Disadvantages: 
1. Requires extra memory for storing memoization array. 
2. Still recursive, so there's a potential for stack overflow for very large n.

Bottom-up Dynamic Programming Approach:

Advantages: 
1. Efficient and uses less memory compared to the memoization approach. 
2. Avoids recursion and stack overflow issues.
Disadvantages: 
1. Requires iterating from 3 to n, which might not be as intuitive as recursive approaches.




