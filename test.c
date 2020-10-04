#include <stdio.h>
int main() {    

    int number1, number2, mul;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating product
    mul = number1 * number2;      
    
    printf("%d x %d = %d", number1, number2, mul);
    return 0;
}
