#define _CRT_SECURE_NO_WARNINGS // This line just makes it so that scanf isn't deprecated.
#include <stdio.h>
#include <stdbool.h> // Standard library for booleans
#include <string.h>

void printcart(int quantity, char item[], char currency, float total) {
    if (quantity > 1) {
        printf("You are buying %d %ss for a total of %c%.2f", quantity, item, currency, total);
    }

    else if (quantity < 1) {
        printf("Well, it looks like you aren't buying anything! Good way to save money."); 
    }

    else {
        printf("You are buying %d %s for a total o...\n%c%.2f", quantity, item, currency, total);
    }

    if (total <= 0) {
        printf("...?");
    }

    else {
        printf("!");
    }

    printf("\n");
}

int main() {
    char item[50] = "";
    int quantity = 0;

    float price = 0.0f; // The f is there because this is a float.
    float total = 0.0f;

    bool got_bag = false;
    char currency = '$';    // This variable will store the type of currency to use!
                            // $, or euros, etc (i dont have the euro symbol on my keyboard. just imagine it's here.)

    // Prompt the user for the item they want to buy.
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin); // Don't forget, you HAVE to pass in the io stream into fgets! (in this case, stdin)
    item[strlen(item) - 1] = '\0'; // Clear the newline character at the end of the string!

    // Prompt the user for the price of the item they want to buy.
    printf("What is the price of that item?: %c", currency);
    scanf("%f", &price);

    // Prompt the user for the quantity of items that they want to buy.
    printf("How many of that item would you like?: ");
    scanf("%d", &quantity);

    // Calculate the total
    total = price * quantity;

    printf("Okay... here's what your cart looks like!\n");
    
    printcart(quantity, item, currency, total);

    if (got_bag) {
        printf("..oh! And here's your bag!");
    }

    // Yes i know. You don't have to say it.
    // infact please don't say it.
    if (total >= 100) {
        printf("Have a lovely day!");
    }

    else if (total >= 5) {
        printf("Bye!");
    }

    else if (total == 0) {
        printf("Goddamn cheapskate... I'm barely making a dollar here and you're getting away with all of that %s for free!!!\nOh, go away already!", item);
    }

    else if (total < 0) {
        printf("How is your total... uhh... does this mean I have to pay you?");
    }

    else {
        printf("Have a good day!"); 
    }

    return 0;
}