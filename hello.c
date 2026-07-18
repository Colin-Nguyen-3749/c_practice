/* Hello world program */

#include <stdio.h> // for printing statements
#include <stdlib.h> // for rand
#include <string.h>


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

    // int i; 
    // float f[4]; // Declare an array of 4 floats
    // When you declare an array, you have to give it a size
    // This size has to be fixed.

    // f[0] = 3.14159;
    // f[1] = 1.41421;
    // f[2] = 1.61803;
    // f[3] = 2.71828;

    // You can also just write the above four lines of code like this instead:
    // float f[4] = {3.14, 1.41, 1.62, 2.72};
    // USE CURLY BRACES!

    // A weird way to build an array, where all indexes not initialized to a value 
    // will automatically be zero:
    // int a[10] = {0, 11, 22, [5]=55, 66, 77};
    // This equals 0 11 22 0 0 55 66 77 0 0

    // Print them all out
    // for (i = 0; i < 4; i++) {
    //     printf("%f\n", f[i]);
    // }

    // How to get the length of an array
    // trick: since C doesn't record this info,
    // you have to manage it separately in another variable
    // To do so, use sizeof on the array, and then divide that by 
    // the size of each element to get the length

    // int x[12]; // create an array of 12 ints called x

    // printf("%zu\n", sizeof x);
    // printf("%zu\n", sizeof(int));

    // printf("%zu\n", sizeof x / sizeof(int));

    //============================================



    //============================================
    //Create a multidimensional array in C!

    // int row, col;

    // int a[2][5] = {
    //     {0, 1, 2, 3, 4},
    //     {5, 6, 7, 8, 9}
    // };

    // for (row = 0; row < 2; row++) {
    //     for (col = 0; col < 5; col++ ) {
    //         printf("(%d,%d) = %d\n", row, col, a[row][col]);
    //     }
    // }

    // Make a 3 x 3 identity matrix
    // int i[3][3] = {
    //     [0][0] = 1,
    //     [1][1] = 1, 
    //     [2][2] = 1
    // };

    // int row, col;

    // for (col = 0; col < 3; col++) {
    //     for (row = 0; row < 3; row++) {
    //         printf("%d ", i[row][col]);
    //     }
    //     printf("\n");
    // }

    //==============================================




    //==============================================
    // Strings in C

    // For some reason, there is no string datatype in C
    // It's just a point to the first character in the string
    // You declare strings with char instead

    // YES, THE ASTERISK IS NEEDED 
    // (I tried without it and it threw an error)
    // char *s = "Hello, World!\n";

    // printf("%s\n", s);

    // // You can also declare it like an array in C
    // char st[] = "Hello, World!"; // You don't have to specify the size, C finds this automatically

    // for (int i = 0; i < 13; i++) {
    //     printf("%c", s[i]);
    // }
    // printf("\n");

    // Interestingly, you can declare a string like a char 
    // and parse it like an array

    // However, mutating a string like this: s[0] = 'z'; does NOT work
    // if you declared it like a char (because you can't change a string literal!)
    // It does work if you declare it as 
    // an array, though! 

    // This can be used to get string length
    // printf("Hello, world! is %zu bytes long.\n", strlen(s));

    // // Now let's try copying the string
    // char t[100];

    // strcpy(t, s); // copy to t from s, just remember it like t = s

    //=================================================



    //=================================================
    // Working with structs
    // Just like an object (even though C doesn't have object-oriented programming)
    // except it only holds variables, no methods

    struct car {
        char *name;
        float price;
        int speed;
    };

    struct car honda;

    honda.name = "Honda Civic";
    honda.price = 10000.96;
    honda.speed = 200;

    // two other ways to initialize a struct's values:
    // struct car honda = {"Honda Civic", 10000.96, 200};
    // variables MUST be in the same order, kind of risky

    // struct car honda = {.speed = 200, .name = "Honda Civic"};
    // MUCH better; variables don't rely on order anymore



    // printf("Hello, World!\n");
    // printf("%s i = %d and f = %f!\n", s, i, f);
}

// Left off at Chapter 8.2 page 66