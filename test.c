#include <stdio.h>
int main() {    

    int number1, number2, mul;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating product
    mul = number1 * number2;      
    printf("%d x %d = %d", number1, number2, mul);

    // Adding  two numbers
    int add = number1 + number2;      
    printf("%d + %d = %d", number1, number2, add);

    //Subtracting two numbers
    int sub = number1 - number2;      
    printf("%d - %d = %d", number1, number2, sub);

    //Dividing two numbers
    double div = number1 % number2;      
    printf("%d / %d = %f", number1, number2, div);

    return 0;
}
