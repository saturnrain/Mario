#include <stdio.h>


int main(void) {
    int height;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    // get hight from input

    for (int i = 1; i <= height; i++) {
        // loop to create each row of the pyramid

        for (int j = 0; j < height - i; j++) {
            printf(" ");
            // print spaces to center the pyramid

        }

        for (int k = 0; k < i; k++) {
            printf("#");
            // print the left side of the pyramid

        }
        
        printf("  ");
        // print the two spaces between sides
        
        for (int k = 0; k < i; k++) {
            printf("#");
            // print the right side of the pyramid

        }

        printf("\n");
        // move to the next line

    }

    return 0;
    
}