#include <stdio.h>

int main(void) {
    
    // This is a variable to represent open file
    FILE *fp;

    char s[1024];
    int linecount = 0;

    // Open file for reading
    // "r" means to open a text stream for reading
    fp = fopen("hello.txt", "r");

    printf("\n");
    // EOF = End of file
    while (fgets(s, sizeof s, fp) != NULL) {
        // Print char to stdout
        printf("%d: %s", ++linecount, s);
    }
    printf("\n");
    printf("\n");

    // Close the file when done
    fclose(fp);
}