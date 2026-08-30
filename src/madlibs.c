// Madlibs program! Mainly for practice with strings (char[]).

#define _CRT_SECURE_NO_WARNINGS
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_newline(char str[]) {
    size_t len = strlen(str);

    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void get_words(char n[], char v[], char a1[], char a2[], char a3[], int size) {
    // Prompt user for adjective 1
    printf("Enter an adjective: ");
    fgets(a1, size, stdin);
    trim_newline(a1);
    
    // Prompt user for noun
    printf("Enter a singular (not plural) noun: ");
    fgets(n, size, stdin);
    trim_newline(n);

    // Prompt user for adjective 2
    printf("Enter another adjective: ");
    fgets(a2, size, stdin);
    trim_newline(a2);

    // Prompt user for verb
    printf("Enter a verb (ending in '-ing'): ");
    fgets(v, size, stdin);
    trim_newline(v);

    // Prompt user for adjective 3
    printf("Enter one more adjective: ");
    fgets(a3, size, stdin);
    trim_newline(a3);
}

int main() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    char answer = '\0';

    while (answer != 'y') {
        get_words(noun, verb, adjective1, adjective2, adjective3, 50);

        printf("Noun: %s\nVerb: %s\nAdjectives: %s, %s, %s\n", noun, verb, adjective1, adjective2, adjective3);

        printf("Proceed? (Y/n)");
        scanf(" %c", &answer);

        answer = tolower(answer);

        if (answer == 'n') {
            printf("Okay, reprompting words...\n");
            getchar();
        }

        else if (answer != 'y') {
            printf("Invalid answer, automatically reprompting words...\n");
            getchar();
        }
    }

    printf("Okay! Here's your finished madlib!\n\n");

    printf("                  --My %s Day!--                \n", adjective3);
    printf("> I was at the store, and I saw a %s.\n", noun);
    printf("> It looked kind of %s, so I decided to buy some.\n", adjective1);
    printf("> While I was checking out, the cashier started %s!\n", verb);
    printf("> I don't know how they did it, but it was pretty %s.\n", adjective2);
    printf("> Well, that was my %s day at the store!\n\n", adjective3);

    printf("Thanks for playing!\n");


    return 0;
}