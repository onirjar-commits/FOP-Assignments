# include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if(m1< 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Grade: F\n");
    } else {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = (total / 500.0) * 100;

        printf("Results: Pass \n");
        printf("Total percentage: %.2f%%\n", percentage);

        if(percentage >= 75) {
            printf("Grade: Distinction\n");
        } else if(percentage >= 60) {
            printf("Grade: First Division\n");
        } else if(percentage >= 50) {
            printf("Grade: Second Division\n");
        } else {
            printf("Grade: Third Division\n");
        }
    }
}