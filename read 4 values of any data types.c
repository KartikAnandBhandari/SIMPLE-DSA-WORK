#include <stdio.h>
    extern int var1, var2, var3, var4;
    
    var1 *=  4;
    var4  *=  4;
    var2  /=  2;
    var3  /=  2;
}
int main() {
    int var1, var2, var3, var4;
    printf("Enter the first value (int): ");
    scanf("%d", &var1);   
    printf("Enter the second value (int): ");
    scanf("%d", &var2);    
    printf("Enter the third value (int): ");
    scanf("%d", &var3);    
    printf("Enter the fourth value (int): ");
    scanf("%d", &var4);
    updation(); 
    printf("Updated values:\n");
    printf("First value: %d\n", var1);
    printf("Second value: %d\n", var2);
    printf("Third value: %d\n", var3);
    printf("Fourth value: %d\n", var4);  
    return 0;
}
