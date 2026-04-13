#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

int main() {
    int n, i, male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        if (e[i].gender == 'M')
            male++;
        else
            female++;
    }

    printf("\nTotal Employees = %d\n", n);
    printf("Male = %d, Female = %d\n", male, female);

    printf("\nSalary > 10000:\n");
    for (i = 0; i < n; i++) {
        if (e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    printf("\nAsst Manager:\n");
    for (i = 0; i < n; i++) {
        if (strcmp(e[i].designation, "AsstManager") == 0)
            printf("%s\n", e[i].name);
    }

    return 0;
}