#include <stdio.h>
#include <stdlib.h>

// Enum for operation types
typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    FIBO
} TypeTag;

// Structure to represent the nodes
typedef struct Node {
    TypeTag type;
    union {
        int value;
        struct Node *operands[2];
    };
} Node;

// Function to create a new node
Node *makeNode(TypeTag type) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->type = type;
    return newNode;
}

// Function to create a node for arithmetic operations
Node *makeFunc(TypeTag type, Node *operand1, Node *operand2) {
    Node *node = makeNode(type);
    node->operands[0] = operand1;
    node->operands[1] = operand2;
    return node;
}

// Function to calculate the value of a node
int calc(Node *node) {
    if (node->type == FIBO) {
        // Calculate Fibonacci using dynamic programming
        int fib[100];  // Assuming you want to calculate up to the 100th Fibonacci number
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= node->operands[0]->value; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        return fib[node->operands[0]->value];
    } else {
        int val1 = calc(node->operands[0]);
        int val2 = (node->operands[1] != NULL) ? calc(node->operands[1]) : 0;
        switch (node->type) {
            case ADD:
                return val1 + val2;
            case SUB:
                return val1 - val2;
            case MUL:
                return val1 * val2;
            case DIV:
                if (val2 != 0) {
                    return val1 / val2;
                } else {
                    printf("Division by zero!\n");
                    exit(1);
                }
        }
    }
}

int main() {
    Node *add = makeFunc(ADD, makeNode(FIBO), makeNode(2));
    Node *mul = makeFunc(MUL, makeNode(FIBO), makeNode(3));
    Node *sub = makeFunc(SUB, mul, add);
    Node *fibo = makeFunc(FIBO, makeNode(5), NULL);

    int result_add = calc(add);
    int result_mul = calc(mul);
    int result_sub = calc(sub);
    int result_fibo = calc(fibo);

    printf("add : %d\n", result_add);
    printf("mul : %d\n", result_mul);
    printf("sub : %d\n", result_sub);
    printf("fibo : %d\n", result_fibo);

    return 0;
}