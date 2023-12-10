#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    char gender;
    int age;
    char vote;

    while (1) 
	{
        printf("Enter name: ");
        scanf(" %49[^\n]", name);
        
        printf("Enter gender (M/F): ");
        scanf(" %c", &gender);

        if (gender == 'M' || gender == 'm') {
            printf("Mr. ");
        } else if (gender == 'F' || gender == 'f') {
            printf("Ms. ");
        } else {
            printf("Invalid gender. Please enter M or F.\n");
            continue;
        }

        printf("Enter age: ");
        scanf("%d", &age);

        if (age < 18) {
            printf("Sorry, you are not eligible to vote. Minimum voting age is 18.\n");
            continue;
        }

        printf("Choose a party to vote:\n");
        printf("a) CSK\nb) MI\nc) RCB\nd) BT\n");
        printf("Enter the party choice (a/b/c/d): ");
        scanf(" %c", &vote);

        switch (vote) {
            case 'a':
            case 'A':
                printf("You voted for CSK. Thank you!\n");
                break;
            case 'b':
            case 'B':
                printf("You voted for MI. Thank you!\n");
                break;
            case 'c':
            case 'C':
                printf("You voted for RCB. Thank you!\n");
                break;
            case 'd':
            case 'D':
                printf("You voted for BT. Thank you!\n");
                break;
            default:
                printf("Invalid party choice. Please choose a valid option.\n");
        }

        printf("Enter 0 or X to exit, any other key to continue: ");
        char exitChar;
        scanf(" %c", &exitChar);
        getchar();  // Clear the input buffer

        if (exitChar == '0' || exitChar == 'x' || exitChar == 'X') 
		{
            printf("Exiting the voting system. Goodbye!\n");
            break;
        }
    }

    return 0;
}

