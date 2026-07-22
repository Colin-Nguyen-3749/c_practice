#include <stdio.h>

int main(void) {
    
    // This is a variable to represent open file
    FILE *fp;

    // Open file for reading
    fp = fopen("hello.txt", "r");

    // Read a single character
    int c = fgetc(fp);

    // Print char to stdout
    printf("%c\n", c);

    // Close the file when done
    fclose(fp);
}