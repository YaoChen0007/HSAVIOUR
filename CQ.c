#include <stdio.h>
#define MAX 5

int cq[MAX], front = -1, rear = -1;

void insert() 
{
    int x;
    if ((rear + 1) % MAX == front) 
    {
        printf("Queue Full\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    cq[rear] = x;
}

void delete() 
{
    if (front == -1) 
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Deleted: %d\n", cq[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void display() 
{
    if (front == -1) 
    {
        printf("Queue Empty\n");
        return;
    }

    int i = front;
    printf("Circular Queue: ");
    while (1) 
    {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() 
{
    int choice = 0;

    while (choice != 4) 
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: printf("Program Ended\n"); break;
            default: printf("Invalid Choice\n");
        }
    }
}