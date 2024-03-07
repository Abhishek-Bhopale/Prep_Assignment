#include <stdio.h>

struct Employee
{
    char firstName[20];
    char lastName[20];
    double salary;
};

void emp_init(struct Employee *emp)
{
    printf("Enter the first name : ");
    gets(emp->firstName);
    printf("Enter the last name : ");
    gets(emp->lastName);
    printf("\n\n");
}

void set_salary(struct Employee *emp,double sal)
{
    emp->salary = sal;
}

void display(struct Employee *emp)
{
    printf("First name : %s\n",emp->firstName);
    printf("Last name : %s\n",emp->lastName);
    printf("salary : %lf\n",emp->salary);
    printf("\n\n");
}


int main()
{
    struct Employee emp1,emp2;
    printf("Initialize the employee 1 : ");
    emp_init(&emp1);
    set_salary(&emp1,10000);
    printf("Initialize the employee 2 : ");
    emp_init(&emp2);
    set_salary(&emp2,20000);

    printf("Print the employee 1 data : \n");
    display(&emp1);
    printf("Print the employee 2 data : \n");
    display(&emp2);

    return 0;
}