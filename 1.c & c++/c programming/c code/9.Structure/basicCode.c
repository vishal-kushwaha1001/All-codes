#include <stdio.h>
#include<string.h>
struct student
{ char name[20];
    int rollNo;
    float percent;
    char grade;
};

int main(){

struct student s1;
strcpy(s1.name,"vishal");
s1.grade ='A';
s1.percent =98.9;
s1.rollNo = 49;

struct student s2 = {"Ayush", 1, 98.9,'A'};

struct student s3;
s3.grade ='A';
s3.percent = 98.45;
s3.rollNo = 53;
printf("%d , %d ,%d\n",s1.rollNo ,s2.rollNo,s3.rollNo);
printf("%s",s1.name);

    return 0;
}