#ifndef MFC_H_ 
#define MFC_H_

#include <stdio.h> // Standard input/output functions
#include <stdlib.h> // Standard library functions
#include <math.h> // Math functions

// Function to calculate and print the sum of two numbers
void calculate_Sum() {
    float a , b ;
    printf("Please enter the value of A : ");
    scanf("%f", &a);
    printf("Please enter the value of B : ");
    scanf("%f", &b);
    printf("A + B = %.2f", a + b);
}

// Function to calculate and print the difference of two numbers
void calculate_Difference() {
    float a , b ;
    printf("Please enter the value of A : ");
    scanf("%f", &a); 
    printf("Please enter the value of B : ");
    scanf("%f", &b);
    printf("A - B = %.2f\n", a - b);
}

// Function to calculate and print the product of two numbers
void calculate_Product() {
    float a , b ;
    printf("Please enter the value of A : ");
    scanf("%f", &a); 
    printf("Please enter the value of B : ");
    scanf("%f", &b); 
    printf("A x B = %.2f\n", a * b);
}

// Function to calculate and print the division of two numbers
void calculate_Division() {
    float a , b ;
    printf("Please enter the value of A : ");
    scanf("%f", &a); 
    // Check if B is not zero
    do {
        printf("Please enter the value of B (B != 0) : ");
        scanf("%f", &b);
    } while (b == 0);
    printf("A / B = %.2f\n", a / b);
}

// Function to calculate and print the modulo operation
void calculate_Modulo () {
    int a , b , result ;
    printf("Please enter the value of A : ");
    scanf("%d", &a);
    // Check if B is not zero
    do
    {
        printf("Please enter the value of B (B != 0) : ");
        scanf("%d", &b);
    } while (b == 0);
    result = a % b; // Calculate the modulo operation
    printf("%d = %d [%d]",a ,result ,b);
}

// Function to calculate and print the power of two numbers
void calculate_Power () {
    int a , b , result ;
    do
    {
        printf("Please enter the value of A (A != 0) : ");
        scanf("%d", &a); 
        printf("Please enter the value of B (B != 0) : ");
        scanf("%d", &b);
    } while (a == 0 || b == 0);
    result = pow(a,b); // Calculate the power operation
    printf("A^B = %d", result);
}

// Function to determine if a number is even or odd
void check_Even_Odd() {
    int a ;
    printf("Please enter a number : ");
    scanf("%d", &a);
    // Check if the number is even or odd
    if (a % 2 == 0) { 
        // If the remainder of x divided by 2 is 0, x is even
        printf("The number %d is even \n", a);
    } else { // Otherwise, x is odd
        printf("The number %d is odd \n", a);
    }
}

// Function to check if a number is prime
void checkPrime() {
    int a, estprime ;
    printf("Please enter a number : ");
    scanf("%d", &a);
    estprime = 1; // Initialize estprime to 1
    // Check if number is equal to 1
    if (a == 1) {
        printf("1 is not a prime number \n");
    } else {
        // Loop to check if N is divisible by any number from 2 to N-1
        for (int i = 2; i <= a - 1; i++) {
            if (a % i == 0) { // If N is divisible by i, set estpremier to 0 and break the loop
                estprime = 0;
                break;
            }
        }
        // Check the value of estpremier to determine if N is prime or not
        if (estprime  == 1) {
            printf("%d is a prime number \n", a); 
        } else {
            printf("%d is not a prime number \n", a);
        }
    }
}

// Function to calculate factorial
void calculateFactorial() {
    int a, f ;
    printf("Please enter the value of N (N >= 0): ");
    scanf("%d", &a); 
    f = 1; // Initialize the factorial variable f to 1
    if (a > 0) { // Check if number is greater than 0
        // Calculate factorial of N using a loop
        for (int i = 1; i <= a; i++) {
            f = f * i;
        }
        printf("%d! = %d\n", a, f);
    } else if (a < 0) {
        // If number is negative
        // Print error message for negative numbers
        printf("Factorial of negative numbers is undefined.\n");
    } else { 
        // If number is less than or equal to 0
        // Print the result directly as factorial of 0 is 1
        printf("%d! = 1\n", a);
    }
}

// Function to solve a quadratic equation
void solveQuadraticEquation() {
    float a, b, c;
    float solution, discriminant, racine1, racine2;
    printf("Enter the coefficients (a, b, and c) of the equation (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c); 
    if (a == 0) { // If a is zero, it's not a quadratic equation
        if (b != 0) { // If b is non-zero, it's a linear equation
            solution = -c / b; // Calculate the solution for the linear equation
            printf("Solution: %.2f\n", solution);
        } else { // If both a and b are zero
            if (c == 0) { // If c is also zero, it's an identity equation
                printf("Infinite solutions (identity equation).\n");
            } else { // If c is non-zero, it's a contradiction
                printf("No solution (contradiction).\n");
            }
        }
    } else { // If a is non-zero, it's a quadratic equation
        discriminant = b * b - 4 * a * c; // Calculate the discriminant
        if (discriminant > 0) { // If discriminant is positive, two real roots
            racine1 = (-b + sqrt(discriminant)) / (2 * a); // Calculate first real root
            racine2 = (-b - sqrt(discriminant)) / (2 * a); // Calculate second real root
            printf("Two real roots: %.2f and %.2f\n", racine1, racine2);
        } else if (discriminant == 0) { // If discriminant is zero, one real double root
            racine1 = racine2 = -b / (2 * a); // Calculate real double root
            printf("One real double root: %.2f\n", racine1);
        } else { // If discriminant is negative, two complex roots
            float realPart = -b / (2 * a); // Calculate real part of complex roots
            float imaginaryPart = sqrt(-discriminant) / (2 * a); // Calculate imaginary part of complex roots
            printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }
}

// Function to check if a number is palindrome
void checkPalindrome() {
    int a, f, inv;
    printf("Please enter a number: ");
    scanf("%d", &a);
    f = a; // Store the original number
    inv = 0; // Initialize the reverse of the number to 0
    // Loop to reverse the number
    do {
        inv = (inv * 10) + (a % 10); // Append the last digit of N to inv
        a = a / 10; // Remove the last digit from number
    } while (a != 0); // Repeat until all digits of number have been processed
    // Check if the original number is equal to its reverse
    if (f == inv) {
        printf("%d is a PALINDROME\n", f); // Print message if it is a palindrome
    } else {
        printf("%d is NOT A PALINDROME\n", f); // Print message if it is not a palindrome
    }
}

#endif