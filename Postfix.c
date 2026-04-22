#include <stdio.h>
#include <ctype.h>
#define MAX 20

int stack[MAX], top = -1;

void push(int x) 
{
    stack[++top] = x;
}

int pop() 
{
    return stack[top--];
}

int evaluate(char exp[]) 
{
    int i = 0;

    while (exp[i] != '\0') 
    {
        if (isdigit(exp[i])) 
        {
            push(exp[i] - '0');
        } 
        else 
        {
            int b = pop();
            int a = pop();

            switch (exp[i]) 
            {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
        i++;
    }
    return pop();
}

int main() 
{
    int choice = 0;
    char exp[20];

    while (choice != 2) 
    {
        printf("\n1.Evaluate Postfix\n2.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter postfix expression: ");
                scanf("%s", exp);
                printf("Result = %d\n", evaluate(exp));
                break;
            case 2:
                printf("Program Ended\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
}