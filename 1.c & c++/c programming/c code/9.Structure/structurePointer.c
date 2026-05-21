#include <stdio.h>
typedef struct employeeData{
    char name[20];
    char designation[20];
    int age;
    int salary;
} data;

int main(){//  1st method 

    data emp1 = {"Vishal", "Software engineer", 23, 30000};
    data *ptr1 = &emp1;

    // printing data of employee 1st
    printf("Name  of 1st employee : %s\n", (*ptr1).name);
    printf("Designation : %s\n", ptr1->designation);
    printf("Age : %d\n", ptr1->age);
    printf("Salary : %d\n", ptr1->salary);

    // 2nd method
    data emp2, *ptr2;
    ptr2 = &emp2;

    // input data of employee 2nd by user
    printf("name of employee : ");
    scanf("%s", &ptr2->name);
    printf("Designation :  ");
    scanf("%s", &ptr2->designation);
    printf("Age : ");
    scanf("%d", &ptr2->age);
    printf("Salary : ");
    scanf("%d", &ptr2->salary);

    // printing data of 2nd employee 
    printf("\v");
    printf("Name of 2nd employee : %s\n", (*ptr2).name);
    printf("Designation : %s\n", ptr2->designation);
    printf("Age : %d\n", ptr2->age);
    printf("Salary : %d\n", ptr2->salary);

    return 0;
}