#include <stdio.h>
#include <string.h>
// create a structure type 'person' with name salay and age as its attribute also initialize and declare .
typedef struct person
{
    char name[20];
    int age;
    long salary;

} p;
void printdata(p x);
int main()
{
    p person1 = {"Anant Sagar", 22, 39000};
    p person2 = {"Ayush Sharma", 21, 30000};
    p person3 = {"Vishal Kushwaha", 21, 39999};
    p person4 = {"Vinayak Singh", 22, 32999};
    p person5 = {"Anurag Jaiswal", 23, 31999};
    p person6 = {"Aditya shrivastav",23,20000 };
    printdata(person1);
    printdata(person2);
    printdata(person3);
    printdata(person4);
    printdata(person5);
    printdata(person6);

    return 0;
}
void printdata(p x)
{
    printf("Name is : %s\n", x.name);
    printf("Age  is :  %d\n", x.age);
    printf("salary is : %ld rupees\n", x.salary);
    printf("\n");
}
