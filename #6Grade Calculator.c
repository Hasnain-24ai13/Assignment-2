#include <stdio.h>

int main() {
    int subject1, subject2, subject3, average;
    char grade;
    
    printf("Enter marks for three subjects (0-100):\n");
    printf("Subject 1: ");
    scanf("%d", &subject1);
    printf("Subject 2: ");
    scanf("%d", &subject2);
    printf("Subject 3: ");
    scanf("%d", &subject3);
    
    average = (subject1 + subject2 + subject3) / 3;
    
    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 80) {
        grade = 'B';
    }
    else if (average >= 70) {
        grade = 'C';
    }
    else if (average >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    
    printf("\nResults:\n");
    printf("Average marks: %d\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}