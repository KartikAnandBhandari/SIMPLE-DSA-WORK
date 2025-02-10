#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head; 
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

void printNodesInRange(struct Node* head, int lower, int upper) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        if (temp->data >= lower && temp->data <= upper) {
            printf("%d ", temp->data);
        }
        temp = temp->next;
    } while (temp != head);   
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertNode(&head, 100);
    insertNode(&head, 150);
    insertNode(&head, 200);
    insertNode(&head, 250);
    insertNode(&head, 300);

    printf("Nodes with values between 120 and 255: ");
    printNodesInRange(head, 120, 255);

    return 0;
}
