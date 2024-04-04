#include<stdio.h>
int main()
{
    int base_salary,hra,da,ta,total_salary;
    // Input salary
    printf("Enter Base Salary:\n ");
    scanf("%d",&base_salary);
    //displaying salary
    printf("\nBase Salary: %d",base_salary);
    //Adding hra,da,ta
    hra = base_salary * 0.10;
    da = base_salary * 0.05;
    ta = base_salary * 0.08;
    //total salary
    total_salary = base_salary + hra + ta +da;
    printf("\nTotal Salary is : %d",total_salary);
    return 0;
}