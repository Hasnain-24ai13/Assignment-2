#include <iostream>
using namespace std;

int main() {
    float firstNumber, secondNumber, answer;
    char operation;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        answer = firstNumber + secondNumber;
        cout << "The result of " << firstNumber << " + " << secondNumber << " is: " << answer << endl;
    } 
    else if (operation == '-') {
        answer = firstNumber - secondNumber;
        cout << "The result of " << firstNumber << " - " << secondNumber << " is: " << answer << endl;
    } 
    else if (operation == '*') {
        answer = firstNumber * secondNumber;
        cout << "The result of " << firstNumber << " * " << secondNumber << " is: " << answer << endl;
    } 
    else if (operation == '/') {
        if (secondNumber != 0) {
            answer = firstNumber / secondNumber;
            cout << "The result of " << firstNumber << " / " << secondNumber << " is: " << answer << endl;
        } else {
            cout << "Error: You cannot divide by zero." << endl;
        }
    } 
    else {
        cout << "Error: Invalid operator entered." << endl;
    }

    return 0;
}