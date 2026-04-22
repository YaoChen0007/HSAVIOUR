#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head = NULL;

void insertFront() 
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);

    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void insertEnd() 
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);

    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if (head == NULL) 
    {
        head = newnode;
        return;
    }

    struct node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void deleteFront() 
{
    if (head == NULL) 
    {
        printf("List Empty\n");
        return;
    }

    struct node* temp = head;
    printf("Deleted: %d\n", temp->data);
    head = head->next;
    free(temp);
}

void deleteEnd() 
{
    if (head == NULL) 
    {
        printf("List Empty\n");
        return;
    }

    struct node* temp = head;

    if (temp->next == NULL) 
    {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    printf("Deleted: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void display() 
{
    struct node* temp = head;

    if (temp == NULL) 
    {
        printf("List Empty\n");
        return;
    }

    printf("List: ");
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() 
{
    int choice = 0;

    while (choice != 6) 
    {
        printf("\n1.Insert Front\n2.Insert End\n3.Delete Front\n4.Delete End\n5.Display\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: insertFront(); break;
            case 2: insertEnd(); break;
            case 3: deleteFront(); break;
            case 4: deleteEnd(); break;
            case 5: display(); break;
            case 6: printf("Program Ended\n"); break;
            default: printf("Invalid Choice\n");
        }
    }
}