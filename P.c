//Write a program that deletes a node of a linear linked list with a negative value.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void deleteNodeWithNegativeValue(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data < 0) {
        *head = temp->next;
        free(temp);
        printf("Node with negative value deleted.\n");
        return;
    }

    while (temp != NULL && temp->data >= 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL && temp->data < 0) {
        prev->next = temp->next;
        free(temp);
        printf("Node with negative value deleted.\n");
    } else {
        printf("No node with a negative value found.\n");
    }
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert node\n");
        printf("2. Delete node with negative value\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(&head, value);
                break;
            case 2:
                deleteNodeWithNegativeValue(&head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

