#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue() 
{
    int x;
    if (rear == MAX - 1) 
    {
        printf("Queue Full\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    if (front == -1) front = 0;
    queue[++rear] = x;
}

void dequeue() 
{
    if (front == -1 || front > rear)
        printf("Queue Empty\n");
    else
        printf("Deleted: %d\n", queue[front++]);
}

void peek() 
{
    if (front == -1 || front > rear)
        printf("Queue Empty\n");
    else
        printf("Front element: %d\n", queue[front]);
}

void display() 
{
    if (front == -1 || front > rear)
        printf("Queue Empty\n");
    else 
    {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() 
{
    int choice = 0;

    while (choice != 5) 
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Program Ended\n"); break;
            default: printf("Invalid Choice\n");
        }
    }
}