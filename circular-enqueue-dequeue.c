
#include <stdio.h>

int queue[20], N = 5;
int front = -1, rear = -1;

void enqueue(int x)
{
    if((rear + 1) % N == front)
    {
        printf("Queue is full/Overflow");
        return;
    }

    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }

    printf("\nQueue:\n");

    int i = front;

    while(1)
    {
        printf("queue[%d] = %d\n", i, queue[i]);

        if(i == rear)
            break;

        i = (i + 1) % N;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty/Underflow");
        return;
    }

    else if(front == rear)
    {
        printf("Deleted item = %d\n", queue[front]);

        front = rear = -1;
    }

    else
    {
        printf("Deleted item = %d\n", queue[front]);

        front = (front + 1) % N;
    }

    if(front != -1)
    {
        printf("\nQueue:\n");

        int i = front;

        while(1)
        {
            printf("queue[%d] = %d\n", i, queue[i]);

            if(i == rear)
                break;

            i = (i + 1) % N;
        }
    }
}

int main()
{
    int choice, x;

    while(1)
    {
        printf("\n\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter item: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}