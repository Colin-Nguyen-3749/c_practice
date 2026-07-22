#include <stdio.h>

int main(void) {
    
    // This is a variable to represent open file
    FILE *fp;

    int c;

    // Open file for reading
    // "r" means to open a text stream for reading
    fp = fopen("hello.txt", "r");

    // EOF = End of file
    while ((c = fgetc(fp)) != EOF) {
        // Print char to stdout
        printf("%c", c);
    }

    // Close the file when done
    fclose(fp);
}