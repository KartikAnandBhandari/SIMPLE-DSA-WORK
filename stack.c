#include <stdio.h>
#define MAX 5
struct Stack {
    int arr[MAX];
    int top;
};
void initStack(struct Stack* s) {
    s->top = -1;
}
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}
int isEmpty(struct Stack* s) {
    return s->top == -1;
}
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push %d\n", value);
    } else {
        s->arr[++(s->top)] = value;
    }
}
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop\n");
        return -1;
    } else {
        return s->arr[(s->top)--];
    }
}
void copyStack(struct Stack* source, struct Stack* destination) {
    struct Stack temp;
    initStack(&temp);

    while (!isEmpty(source)) {
        push(&temp, pop(source));
    }
    while (!isEmpty(&temp)) {
        push(destination, pop(&temp));
    }
}
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}
int main() {
    struct Stack stack1, stack2, stack3;

    initStack(&stack1);
    initStack(&stack2);
    initStack(&stack3);

    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);

    push(&stack2, 40);
    push(&stack2, 50);
    push(&stack2, 60);

    copyStack(&stack1, &stack3);
    copyStack(&stack2, &stack3);

    display(&stack3);

    return 0;
}
