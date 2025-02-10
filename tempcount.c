#include <stdio.h>
void findMinTemperatureDay(float temp1, float temp2, float temp3) {
    if (temp1 <= temp2 && temp1 <= temp3) {
        printf("Day 1 had the minimum temperature: %.2f\n", temp1);
    } else if (temp2 <= temp1 && temp2 <= temp3) {
        printf("Day 2 had the minimum temperature: %.2f\n", temp2);
    } else {
        printf("Day 3 had the minimum temperature: %.2f\n", temp3);
    }
}
int main() {
    float temp1, temp2, temp3;

    
    printf("Enter temperature for Day 1: ");
    scanf("%f", &temp1);

    printf("Enter temperature for Day 2: ");
    scanf("%f", &temp2);

    printf("Enter temperature for Day 3: ");
    scanf("%f", &temp3);

    findMinTemperatureDay(temp1, temp2, temp3);

    return 0;
}
