#include <stdio.h>
#include <string.h>

struct Calculation {
    char operation[20];
    double result;
};

int main() {
    int choice;
    double num1, num2, res;
    struct Calculation history[5];
    int hCount = 0;

    while(1) {
        printf("\n=== Simple Calculator with History ===\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Show History\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 6) {
            printf("Exiting...\n");
            break;
        }

        if(choice == 5) {
            printf("\n--- Last Calculat
