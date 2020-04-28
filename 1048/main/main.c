#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salary, newSalary, earned;
    int per;
    scanf("%lf", &salary);

    if (salary <= 400.00) {
        per = 15;
        earned = (salary / 100) * per;
        newSalary = salary + earned;
    } else if (salary >= 400.01 && salary <= 800.00 ) {
        per = 12;
        earned = (salary / 100) * per;
        newSalary = salary + earned;
    } else if (salary >= 800.01 && salary <= 1200.00 ) {
        per = 10;
        earned = (salary / 100) * per;
        newSalary = salary + earned;
    } else if (salary >= 1200.01 && salary <= 2000.00 ) {
        per = 7;
        earned = (salary / 100) * per;
        newSalary = salary + earned;
    } else if (salary > 2000.00 ) {
        per = 4;
        earned = (salary / 100) * per;
        newSalary = salary + earned;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", newSalary, earned, per);
    return 0;
}
