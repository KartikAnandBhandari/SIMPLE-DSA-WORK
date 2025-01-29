#include <stdio.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int hasUppercase = 0;

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] >= 'A' && inputString[i] <= 'Z') {
            hasUppercase = 1;
            inputString[i] = inputString[i] + 32;
        }
    }

    if (hasUppercase) {
        printf("Lowercase string: %s\n", inputString);
    } else {
        printf("The entered string is already in lowercase. Please enter an uppercase string.\n");
    }

    return 0;
}