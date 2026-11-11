#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("I'm thinking of a number 0-9...\n");
    int randomNumber = rand() % 10;
    int userNum;

    scanf("%d", &userNum);

    if (userNum == randomNumber) {
        printf("Good guess, how'd you know?!\n");
    } else {
        printf("Nope, nice try.\n");
    }

    return 0;
}