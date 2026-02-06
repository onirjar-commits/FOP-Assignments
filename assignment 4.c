# include <stdio.h>

int main() {
    float basic_salary, gross_salary, net_salary, HRA, TA, PT;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    HRA = 0.10 * basic_salary;
    TA = 0.05 * basic_salary;
    gross_salary = basic_salary + HRA + TA;
    PT = 0.02 * gross_salary;
    net_salary = gross_salary - PT;
    
    printf("Net Salary: %f\n", net_salary);
}