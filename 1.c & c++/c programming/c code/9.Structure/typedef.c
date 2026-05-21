#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[20];
    int rollno;
    float percent;
} stu;

void printinfo(stu s);

int main(){ // method 1 -  initializing  
    stu s1;
    strcpy(s1.name, "vishal");
    s1.rollno = 49;
    s1.percent = 90;

    // method 2 - direct initializing
    stu s2 = {"ayush", 1, 91};

    printinfo(s1);
    printinfo(s2);
    return 0;
}

// print using function
void printinfo(stu s){
    printf("\n");
    printf("Name is : %s\n", s.name);
    printf("Roll no is :  %d\n", s.rollno);
    printf("marks is : %f percentage \n", s.percent);
}
