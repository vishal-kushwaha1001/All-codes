#include <stdio.h>
#include <string.h>
// create a union type 'employee' with  salay and age as its attribute also initialize and declare .
typedef union employee
{   
    char designation[20];
    int age;
    long salary;

} emp;
 int main(){

  emp person[5];
  for(int i =0 ; i<5 ; i++){
   printf("what would you  prefer to store of employee %d :",i);
    char choice[10];
    scanf("%s",choice );
    if (strcmp(choice, "designation") == 0)
    {
     scanf("%s",person[i].designation);   
    }
    else if (strcmp(choice, "age") == 0)
    {
    scanf("%d",&person[i].age);
    }
    else if (strcmp(choice, "salary") == 0)
    {
    scanf("%ld",&person[i].salary);
  }
 
  }

 }