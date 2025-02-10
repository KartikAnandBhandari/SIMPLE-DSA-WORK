#include <stdio.h>


float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, simpleInterest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simpleInterest = calculateSimpleInterest(principal, rate, time);

   
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
