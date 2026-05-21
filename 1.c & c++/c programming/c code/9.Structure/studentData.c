#include <stdio.h>

typedef struct studentMarks
{   char name[20];
    int c;
    int COA;
    int PMC;
    int FCET;
    int DM;
} stuM;
int main()
{
    int n;
    printf("number of students :");
    scanf("%d", &n);
    stuM marks[n];
    // input marks
    for (int i = 0; i < n; i++)
    {   printf("\n Name of student : ");
        // fgets(marks[i].name, 200, stdin);
        scanf("%s",marks[i].name);
        printf("marks in c :");
        scanf("%d", &marks[i].c);
        printf("marks in COA : ");
        scanf("%d", &marks[i].COA);
        printf(" marks in PMC : ");
        scanf("%d", &marks[i].PMC);
        printf("marks in FCET : ");
        scanf("%d", &marks[i].FCET);
        printf(" marks in Dm : ");
        scanf("%d", &marks[i].DM);
    }

    // output
    for (int i = 0; i < n; i++)
    {   printf("\n %s ",marks[i].name);
        printf("marks in c:%d\n", marks[i].c);
        printf("marks in COA:%d\n", marks[i].COA);
        printf("marks in FCET:%d\n", marks[i].FCET);
        printf("marks in PMC:%d\n", marks[i].PMC);
        printf("marks in DM:%d\n", marks[i].DM);
    }

    // calculation for total marks
     int totalCOA = 0;
    int totalC = 0;
    int totalPMC = 0;
    int totalFCET = 0;
    int totalDm = 0;
    for (int i = 0; i < n; i++)
    {
        totalC += marks[i].c;
        totalCOA += marks[i].COA;
        totalPMC += marks[i].PMC;
        totalDm += marks[i].DM;
        totalFCET += marks[i].FCET;
    }
    printf(" total marks in c:%d\n", totalC);
    printf(" total marks in COA:%d\n", totalCOA);
    printf(" total marks in FCET:%d\n", totalFCET);
    printf(" total marks in PMC:%d\n", totalPMC);
    printf(" total marks in DM:%d\n", totalDm);
    return 0;
}
