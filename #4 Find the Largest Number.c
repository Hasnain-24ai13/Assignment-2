#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    printf("Third number: ");
    scanf("%d", &num3);
    
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    }
    else {
        printf("%d is the largest number.\n", num3);
    }
    
    return 0;
}