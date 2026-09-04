// Simple user input tutorial.

#define _CRT_SECURE_NO_WARNINGS // This line just makes it so that scanf isn't deprecated.
#include <stdio.h> // Standard input and output
#include <string.h> // String utilities

int main() {
    int age = 0;
    float gpa = 0.0f; // The "f" specifies that it's a float. (It isn't needed for doubles)
    char grade = '\0'; // Chars in C use single quotes. \0 is a null terminator
    char name[30] = ""; // Even though the string is empty, it still has 30 bytes allocated to it in memory.

    // Prompt the user to input their age.
    printf("Enter your age!: ");
    scanf("%d", &age);          /*
                                The address-of operator (&) is used to get the memory address of a variable.
                                Basically, we use this to pass in the address of the variable as an argument,
                                rather than the value that the variable holds! (big comment for important stuff)
                                */
    printf("Your age is %d!\n", age);

    // Prompt the user to input their GPA.
    printf("Now, please enter your GPA!: ");
    scanf("%f", &gpa);
    printf("Your GPA is %.2f!\n", gpa); // .2f sets the precision of the float to display! In this case, .2 means that it displays two decimal values (the tenths place and the hundredths place)

    // Prompt the user to input their letter grade.
    getchar();  // This function technically returns the value of the first character in the current input stream, but it also clears it if it isn't saved anywhere!
                // We can use this function to clear the newline from the input buffer!
    printf("Please input a letter grade (A, B, C, D, or F.):");
    scanf("%c", &grade);
    printf("Your letter grade is %c!\n", grade);

    // Prompt the user to input their full name.
    getchar();
    printf("Please enter your full name!:");
    fgets(name, sizeof(name), stdin);   // fgets (file get string) scans until a certain length instead of until a whitespace. 
                                                                // You don't pass in name as a pointer because arrays are already just pointers to their first value in memory!
    name[strlen(name) - 1] = '\0';  // Because we press enter in the terminal, a newline character gets appended to the end of the name variable!
                                        // To fix this, you can just set that char in the string array to a null terminator manually.
    printf("Your name is %s!\n", name);
}
