#include <stdio.h>

int main() {
    char str[100], str2[100];
    int i, len = 0, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    printf("Length = %d\n", len);

    printf("Reversed string = ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\nEnter another string: ");
    scanf("%s", str2);

    for (i = 0; str[i] != '\0' || str2[i] != '\0'; i++) {
        if (str[i] != str2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    flag = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    // Substring check (simple)
    int j, found = 0;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str[i + j] != str2[j])
                break;
        }
        if (str2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}