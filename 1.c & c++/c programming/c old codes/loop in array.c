#include<stdio.h>

int main()
{ int empsalary[10];
for(int i = 0; i<10; i++) {
    printf("enter salary:");
    scanf("%d\n",&empsalary[i]);}
    
   for(  int i = 0; i<10; i++)  { printf("salary is %d\n", empsalary[i]);}
    return 0;
}