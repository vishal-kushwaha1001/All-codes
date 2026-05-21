#include <stdio.h>
#include<string.h>

typedef struct studentMarks{
    char name[20];
    int c;
    int COA;
    int PMC;
    int FCET;
    int DM;
} stuM;

typedef struct totalMarks{
    char name[20];
    int total;
    float percent;
}tm;

int main(){
    int n ;
    printf("number of students :");
    scanf("%d",&n);
    stuM marks[n];
    // input marks
    for (int i = 0; i < n; i++){ 
        printf("\v");
        printf("Name of %d student : ",i+1);
        scanf("%s",marks[i].name);
        printf("marks in c :");
        scanf("%d", &marks[i].c);
        printf("marks in COA : ");
        scanf("%d", &marks[i].COA);
        printf("marks in PMC : ");
        scanf("%d", &marks[i].PMC);
        printf("marks in FCET : ");
        scanf("%d", &marks[i].FCET);
        printf("marks in Dm : ");
        scanf("%d", &marks[i].DM);
    }

    // output (print each student name and their individual  subject wise marks marks. )
    for (int i = 0; i < n; i++){ 
        printf("\v");
        printf("%s ",marks[i].name);
        printf("marks in c:%d\n", marks[i].c);
        printf("marks in COA:%d\n", marks[i].COA);
        printf("marks in FCET:%d\n", marks[i].FCET);
        printf("marks in PMC:%d\n", marks[i].PMC);
        printf("marks in DM:%d\n", marks[i].DM);
    }

    // calculation for total marks for each student
     tm totalMarks[n] ;
    for(int i =0 ; i< n; i++){
      strcpy(totalMarks[i].name,marks[i].name);
      totalMarks[i].total = marks[i].c + marks[i].COA +marks[i].DM +marks[i].FCET + marks[i].PMC; 
      totalMarks[i].percent = totalMarks[i].total/5.0; 
    }
    // printing total marks  and their percentage of each student
     for(int i= 0; i< n; i++){
        printf("\v");
        printf("total marks of %s is : %d out of 500\n",totalMarks[i].name,totalMarks[i].total);
        printf("percentage is : %f  \n",totalMarks[i].percent);
     }
    
    return 0;
}
