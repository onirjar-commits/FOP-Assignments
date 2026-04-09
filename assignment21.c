#include <stdio.h>

int main() {

    // Assignment 21
    // Program to copy contents of one file to another file.
    
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;
    printf("Enter the name of the source file: ");
     scanf("%s", sourceFile);
    printf("Enter the name of the destination file: ");
    scanf("%s", destFile);
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }