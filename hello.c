/* Hello world program */

#include <stdio.h> // for printing statements
#include <stdlib.h> // for rand


int main(void) {

    // int i = 2;
    // float f = 3.14;
    // char *s = "Hello, World!"; // char * (char pointer) is the string type

    // int x = 1; 
    // if (x) {
    //     printf("x is true!\n");
    // }

    // // ternary operator
    // // if x > 10, add 17 to y. Otherwise add 37 to y
    // int y = 0;
    // int q = 4;
    // y += q > 10? 17: 37;

    // // Another example of a ternary operator
    // // %d refers to x, and %s refers to the string at the end
    // // If x % 2 is 0, then print 'even', otherwise print 'odd'
    // printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

    // printf("This is y if q is %d: %d.\n", q, y);

    // // multi-purpose for-loop!
    // for (int k = 0, l = 0; k < 15; k++, l++) {
    //     printf("%d, %d\n", k, l);
    // }

    // //==================================
    // // sizeof operator tells us the size (in bytes) that
    // // a particular variable or data type uses in memory

    // int a = 999;
    
    // // %zu is the format specifier for type size_T
    // // If your compiler balks at the 'z' part, omit it

    // printf("%zu\n", sizeof a);
    // printf("%zu\n", sizeof(2+7));
    // printf("%zu\n", sizeof 3.14);

    // // sizeof is the size of bytes of the type of the expression, not the 
    // // size of the expression itself!
    // // That's why (2+7) is the same size as a (999) - they're both ints!

    // printf("%zu\n", sizeof(int));
    // printf("%zu\n", sizeof(char)); // char is always a size of 1!

    //==================================

    //==================================
    // do-while vs while
    // practically the same, but the condition check for a while loop 
    // happens at the START of the loop; do-while does it at the end

    // example:
    // int c = 10;

    // // this won't execute
    // while (c < 10) {
    //     printf("while: c is %d\n", c);
    //     c++;
    // }

    // // with a do-while statement:

    // do {
    //     printf("do-while: c is %d\n", c);
    //     c++;
    // } while (c < 10);

    // example of when you'd use do-while:
    // int r;

    // do {
    //     r = rand() % 100;
    //     printf("%d\n", r);
    // } while (r != 88); // repeat until 88 comes up!


    //===================================



    //===================================
    // Arrays in C
    //===================================

    int i; 
    float f[4]; // Declare an array of 4 floats
    // When you declare an array, you have to give it a size
    // This size has to be fixed.

    f[0] = 3.14159;
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;

    // You can also just write the above four lines of code like this instead:
    // float f[4] = {3.14, 1.41, 1.62, 2.72};
    // USE CURLY BRACES!

    // Print them all out
    for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]);
    }

    // How to get the length of an array
    // trick: since C doesn't record this info,
    // you have to manage it separately in another variable
    // To do so, use sizeof on the array, and then divide that by 
    // the size of each element to get the length

    int x[12]; // create an array of 12 ints called x

    printf("%zu\n", sizeof x);
    printf("%zu\n", sizeof(int));

    printf("%zu\n", sizeof x / sizeof(int));

    //============================================

    // printf("Hello, World!\n");
    // printf("%s i = %d and f = %f!\n", s, i, f);
}

// Left off at Chapter 6 page 50