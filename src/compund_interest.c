// What is compund interest? I have no clue.
// But this should be fun!

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0; // The principal is your initial investment.
    double rate = 0.0; // The interest rate over the years
    int years = 0; // The years!
    int times_compounded = 0; // idk what this means ill look it up
    double total = 0.0;

    printf("Compund Interest Calculator!\n");

    printf("Enter the principal (your initial investment!): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate: ");
    scanf("%lf", &rate);

    rate = rate / 100; // i have no idea why this is done but okay

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year: ");
    scanf("%d", &times_compounded);

    total = principal * (pow(1 + rate / times_compounded, times_compounded * years));

    printf("After %d years, your total will come out to be $%lf!", years, total);

    return 0;
}