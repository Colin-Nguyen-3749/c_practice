/* Hello world program */

#include <stdio.h>

int main(void) {

    int i = 2;
    float f = 3.14;
    char *s = "Hello, World!"; // char * (char pointer) is the string type

    int x = 1; 
    if (x) {
        printf("x is true!\n");
    }

    // printf("Hello, World!\n");
    printf("%s i = %d and f = %f!\n", s, i, f);
}

// Left off at Chapter 3.2 page 24