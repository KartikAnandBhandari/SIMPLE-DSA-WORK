#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* current = NULL;
    int value, searchValue;
    int found = 0;

 
    printf("Enter numbers for the list, -1 to stop:\n");
    while (1) {
        scanf("%d", &value);
        if (value == -1) {
            break;
        }

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    printf("Enter a number to search for: ");
    scanf("%d", &searchValue);

    current = head;
    while (current != NULL) {
        if (current->data == searchValue) {
            found = 1;
            break;
        }
        current = current->next;
    }

    if (found) {
        printf("%d found in the list.\n", searchValue);
    } else {
        printf("%d not found in the list.\n", searchValue);
    }

    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
