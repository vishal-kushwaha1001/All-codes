#include <stdio.h>
#include <string.h>
#include<conio.h>
// create a union type 'employee' with name salay and age as its attribute also initialize and declare .
 typedef struct employee
{
    char name[20];
    int age;
    long salary;
    

} emp;
void printdata(emp p, char choice[10])
{
    if (strcmp(choice, "name") == 0)
    {
        printf("Name is : %s\n", p.name);
    }
    else if (strcmp(choice, "age") == 0)
    {
        printf("Age  is :  %d\n", p.age);
    }
    else if (strcmp(choice, "salary") == 0)
    {
        printf("salary is : %ld rupees\n", p.salary);
    }

    printf("\n");
}

int main()
{
    //clrscr();
    emp person1 = {"Anant Sagar", 22, 39000};
    emp person2 = {"Ayush Sharma", 21, 30000};
    emp person3 = {"Vishal Kushwaha", 21, 39999};
    emp person4 = {"Vinayak Singh", 22, 32999};
    emp person5 = {"Anurag Jaiswal", 23, 31999};
    printf("what would you  prefer to print of employee :");
    char choice[10];
    scanf("%s", choice);

    printdata(person1, choice);
    printdata(person2, choice);
    printdata(person3, choice);
    printdata(person4, choice);
    printdata(person5, choice);

    return 0;
}
