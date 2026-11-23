TASK 1: Basic – Calculator Program

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user to choose an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt user for two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on chosen operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);TASK 1: Basic – Calculator Program

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user to choose an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt user for two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on chosen operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;
}
break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;
}
