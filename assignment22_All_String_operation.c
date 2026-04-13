#include <stdio.h>
#include <string.h>

void reverse_string(char *s) {
    int i, j;
    char tmp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n1.Length\n2.Copy\n3.Concatenate\n4.Compare\n5.Reverse\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                reverse_string(str1);
                printf("Reversed = %s\n", str1);
                break;

            default:
                printf("Invalid choice\n");
                break;

        }
    } while (choice != 6);

    return 0;
}