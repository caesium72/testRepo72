#include<stdio.h>
#include<stdlib.h>

#define MAX 4 // Remove semicolon

int stack[4];
int top = -1;

void push(int data) {
    if (top == (MAX - 1)) {
        printf("stack overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = data;
}

int pop() { // Change return type to int
    if (top == -1) {
        printf("stack underflow\n");
        exit(1);
    }
    int value = stack[top];
    top = top - 1; // Decrement the top after popping
    return value;
}

void print() {
    int i;
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }
    for (i = top; i >=0 ; i--) { // Fix the loop condition and print statement
        printf(" |||[%d]|||\n", stack[i]);
    }
    printf("\n"); // Move the new line outside the loop
}

int main() {
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    printf("deleted value was %d\n",data); // Move the new line outside the loop
    print(); // Print the stack after popping
    return 0;
}
