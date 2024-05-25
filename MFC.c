#include <stdio.h> // Standard input/output functions
#include "MFC.h"

int main() {
    system("CLS");
    int choice;

    while (1) {
        // Display menu to the user
        // Display menu to the user
        printf("----------------------------------------------------------------------------------------\n");
        printf("|                                  Choose an operation                                 |\n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("| 1. Calculate Sum                                                                      |\n");
        printf("| 2. Calculate Difference                                                               |\n");
        printf("| 3. Calculate Product                                                                  |\n");
        printf("| 4. Calculate Division                                                                 |\n");
        printf("| 5. Calculate Modulo                                                                   |\n");
        printf("| 6. Calculate Power                                                                    |\n");
        printf("| 7. Check Even/Odd                                                                     |\n");
        printf("| 8. Check Prime                                                                        |\n");
        printf("| 9. Calculate Factorial                                                                |\n");
        printf("| 10. Solve Quadratic Equation                                                          |\n");
        printf("| 11. Check Palindrome                                                                  |\n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("Enter your choice (1-11) : ");
        scanf("%d", &choice);

        // Perform the selected operation based on user's choice
        switch(choice) {
            case 1:
                system("CLS");
                calculate_Sum();
                printf("\n\n");
                break;
            case 2:
                system("CLS");
                calculate_Difference();
                break;
            case 3:
                system("CLS");
                calculate_Product();
                printf("\n\n");
                break;
            case 4:
                system("CLS");
                calculate_Division();
                printf("\n\n");
                break;
            case 5:
                system("CLS");
                calculate_Modulo();
                printf("\n\n");
                break;
            case 6:
                system("CLS");
                calculate_Power();
                printf("\n\n");
                break;
            case 7:
                system("CLS");
                check_Even_Odd();
                printf("\n\n");
                break;
            case 8:
                system("CLS");
                checkPrime();
                printf("\n\n");
                break;
            case 9:
                system("CLS");
                calculateFactorial();
                printf("\n\n");
                break;
            case 10:
                system("CLS");
                solveQuadraticEquation();
                printf("\n\n");
                break;
            case 11:
                system("CLS");
                checkPalindrome();
                printf("\n\n");
                break;
            default:
                system("CLS");
                printf("Invalid choice! Please choose a number between 1 and 11.\n");
                printf("\n\n");
                break;
        }
    }

    return 0;
}