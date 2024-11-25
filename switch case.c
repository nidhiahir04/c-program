#include <stdio.h>


float calculate(float num1, float num2, char operator) {
    float result;

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
           
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                result = 0;
            }
            break;
        default:
            printf("Invalid operator! Please enter +, -, *, or /.\n");
            result = 0;
    }

    return result;
}

int main() {
    float num1, num2, result;
    char operator;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%f", &num2);

   
    result = calculate(num1, num2, operator);

   
    if (operator == '+' || operator == '-' || operator == '*' || (operator == '/' && num2 != 0)) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
