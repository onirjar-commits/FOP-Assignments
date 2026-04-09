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
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not open destination file.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully.\n");

    fwrite(sourceFile, sizeof(char), sizeof(sourceFile), dest);
    printf("Data written to destination file successfully.\n");

    fseek(dest, 0, SEEK_SET); 

    fread(destFile, sizeof(char), sizeof(destFile), dest);
    printf("Data read from destination file: %s\n", destFile);

    fclose(source);
    fclose(dest);

    return 0;
}