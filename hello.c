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

    // ternary operator
    // if x > 10, add 17 to y. Otherwise add 37 to y
    int y = 0;
    int q = 4;
    y += q > 10? 17: 37;

    // Another example of a ternary operator
    // %d refers to x, and %s refers to the string at the end
    // If x % 2 is 0, then print 'even', otherwise print 'odd'
    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

    printf("This is y if q is %d: %d.\n", q, y);

    // multi-purpose for-loop!
    for (int k = 0, l = 0; k < 15; k++, l++) {
        printf("%d, %d\n", k, l);
    }

    //==================================
    // sizeof operator tells us the size (in bytes) that
    // a particular variable or data type uses in memory
    
    int a = 999;
    
    // %zu is the format specifier for type size_T
    // If your compiler balks at the 'z' part, omit it

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2+7));
    printf("%zu\n", sizeof 3.14);

    //==================================

    // printf("Hello, World!\n");
    printf("%s i = %d and f = %f!\n", s, i, f);
}

// Left off at Chapter 3.2 page 24