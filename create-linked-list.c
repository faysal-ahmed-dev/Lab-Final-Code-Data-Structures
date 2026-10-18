#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, i, value;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("List size must be greater than 0.\n");
        return 0;
    }

    // 2. Loop to create 'n' elements dynamically
    for (i = 1; i <= n; i++) {
        printf("Enter data for element %d: ", i);
        scanf("%d", &value);

        // Allocate memory for the new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            // If the list is empty, make this the first (head) node
            head = newNode;
            temp = head;
        } else {
            // Otherwise, link the previous node to this new node
            temp->next = newNode;
            temp = newNode; // Move the temp tracker to the new end node
        }
    }

    // 3. Traverse and display the linked list
    printf("\nCreated Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // 4. Free allocated memory (Good practice)
    temp = head;
    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}