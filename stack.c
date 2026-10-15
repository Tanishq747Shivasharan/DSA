
#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Insert an element into the stack
void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    top++;
    stack[top] = value;

    printf("%d pushed into stack.\n", value);
}

// Remove the top element
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("%d popped from stack.\n", stack[top]);
    top--;
}

// Display the top element
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

// Display all stack elements
void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements (top to bottom):\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}
