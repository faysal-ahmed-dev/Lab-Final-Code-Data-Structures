
#include <stdio.h>

int queue[20], n = 5;
int front = -1, rear = -1;

void enqueue(int x)
{
    if(rear == n-1)
    {
        printf("Queue is full");
        return;
    }

    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else{
        rear++;
        queue[rear] = x;
    }

    for(int i = front; i<=rear; i++){
        printf("queue[%d]= %d\n", i, queue[i]);
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty");
        return;
    }

    
    else if(front == rear)
    {
        printf("Deleted item = %d\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Deleted item = %d\n", queue[front]);

        front++;
    }

   if(front != -1)
    {
    for(int i = front; i <= rear; i++){
        printf("queue[%d] = %d\n", i, queue[i]);
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