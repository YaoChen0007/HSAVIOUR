#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() 
{
    int choice = 0, n;

    while (choice != 2) 
    {
        printf("\n1.Calculate Factorial\n2.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;
            case 2:
                printf("Program Ended\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
}