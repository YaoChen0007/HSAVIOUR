#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push() 
{
    int x;
    if (top == MAX - 1) 
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter element to push: ");
    scanf("%d", &x);
    stack[++top] = x;
}

void pop() 
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Deleted element: %d\n", stack[top--]);
}

void peek() 
{
    if (top == -1)
        printf("Stack Empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}

void display() 
{
    if (top == -1)
        printf("Stack Empty\n");
    else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() 
{
    int choice = 0;

    while (choice != 5) 
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Program Ended\n"); break;
            default: printf("Invalid Choice\n");
        }
    }
}