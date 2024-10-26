#include <stdio.h>

int main() {
    int firstNumber, secondNumber, answer;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        answer = firstNumber + secondNumber;
        printf("The result of %d + %d is: %d\n", firstNumber, secondNumber, answer);
    } 
    else if (operation == '-') {
        answer = firstNumber - secondNumber;
        printf("The result of %d - %d is: %d\n", firstNumber, secondNumber, answer);
    } 
    else if (operation == '*') {
        answer = firstNumber * secondNumber;
        printf("The result of %d * %d is: %d\n", firstNumber, secondNumber, answer);
    } 
    else if (operation == '/') {
        if (secondNumber != 0) {
            answer = firstNumber / secondNumber;
            printf("The result of %d / %d is: %d\n", firstNumber, secondNumber, answer);
        } else {
            printf("Error: You cannot divide by zero.\n");
        }
    } 
    else {
        printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
