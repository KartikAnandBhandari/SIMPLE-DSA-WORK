#include <stdio.h>

int isDivisibleBy6(int num) {
    if (num % 6 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if (isDivisibleBy6(num)) {
        printf("Divisible by 6\n");  
    } else {
        printf("Not divisible by 6\n");  

    return 0;
}
