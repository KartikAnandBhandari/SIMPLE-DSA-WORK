#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of countries: ");
    scanf("%d", &n);

    double GDP[n];

    
    printf("Enter the GDP values of %d countries:\n", n);
    for(int i = 0; i < n; i++) {
        printf("GDP of country %d: ", i + 1);
        scanf("%lf", &GDP[i]);
    }

    
    printf("\nGross Domestic Products of the countries:\n");
    for(int i = 0; i < n; i++) {
        printf("Country %d: %.2lf\n", i + 1, GDP[i]);
    }

    return 0;
}
