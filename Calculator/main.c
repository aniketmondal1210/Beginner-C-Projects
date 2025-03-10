#include <stdio.h>
#include <stdlib.h>

// Function to display the calculator menu
void calculatorDisplay() {
    printf("Welcome to Calculator\n\n");
    printf("Choose one operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

// Function to get user input
void userInput(int *a, int *b) {
    printf("Give two numbers on two lines\n");
    printf("Number 1 is: ");
    scanf("%d", a);
    printf("Number 2 is: ");
    scanf("%d", b);
}

// Function to perform addition
int addition(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtraction(int a, int b) {
    return a - b;
}

// Function to handle the calculator operations
void calculatorFunction(int userChoice) {
    if (userChoice == 1) {
        printf("Let's perform addition\n");
        int a, b;
        userInput(&a, &b);
        int output = addition(a, b);
        printf("The sum is: %d\n", output);
    } else if (userChoice == 2) {
        printf("Let's perform subtraction\n");
        int a, b;
        userInput(&a, &b);
        int output = subtraction(a, b);
        printf("The difference is: %d\n", output);
    } else {
        printf("Exiting the calculator, bye bye!\n");

    }
}

int main() {
    while (1) {
        calculatorDisplay();
        printf("Select the operation: ");
        int userChoice;
        scanf("%d", &userChoice);

        calculatorFunction(userChoice);

        if (userChoice >= 3) {
            break;  // Exit the loop if user chooses 3
        }
    }
    return 0;
}
    
