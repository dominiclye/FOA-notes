// Entry file for learning C

#include <stdio.h>


int main() {
    char input[100];

    printf("Enter your name: ");
    fgets(input, sizeof(input), stdin);
    printf("You entered: %s", input);
}