#include <stdio.h>

void first() {
    extern float score1, score2, score3, average;
    average = (score1 + score2 + score3) / 3;
}
void second() {
    extern float score1, score2, score3;
    float smallest = score1;
    if (score2 < smallest) {
        smallest = score2;
    }
    if (score3 < smallest) {
        smallest = score3;
    }
    printf("Smallest score: %.2f\n", smallest);
}
int main() {
    float score1, score2, score3, average;
    printf("Enter score for test 1: ");
    scanf("%f", &score1);
    printf("Enter score for test 2: ");
    scanf("%f", &score2);
    printf("Enter score for test 3: ");
    scanf("%f", &score3);  
    first();
    printf("Average score: %.2f\n", average);
    second();
    return 0;
}
