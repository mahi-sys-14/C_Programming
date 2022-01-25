#include <stdio.h>
int main()
{
    int basic_salary;
    float gross_salary;
    float DA, rent;
    float temp;
    
    printf("enter basic salary \n");
    scanf("%d",&basic_salary);
    printf("Basic Salary is %d\n",basic_salary);
    
    temp = basic_salary;
    printf("temp is %f\n",temp);
    
    DA = (temp * 40)/100;
    printf("Dearance is %f\n",DA);
    gross_salary = DA + basic_salary;
    printf("Basic salary is %f\n",gross_salary);
    
    rent = (temp * 20)/100;
    printf("rent is %f\n",rent);
    basic_salary = gross_salary + rent;
    printf("Basic salary is %f\n",basic_salary);
    
    printf("Gross salary is %f\n",gross_salary);
    return 0;
}