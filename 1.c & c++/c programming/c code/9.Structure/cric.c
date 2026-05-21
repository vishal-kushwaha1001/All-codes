#include<stdio.h>
#include<string.h>

typedef struct cricketer{
   
    char name[20];
    int age;
    int matches;
    float average;
    int hundreds;
} cric;

int main(){
    cric arr[2];
    
    for(int i =0 ; i<2;i++){
        printf("input name : ");
        scanf("%s",arr[i].name);
        printf("input matches : ");
        scanf("%d",&arr[i].matches);
        printf("input age : ");
        scanf("%d",&arr[i].age);
        printf("input average :");
        scanf("%f",&arr[i].average);
        printf("input hundreds : ");
        scanf("%d",&arr[i].hundreds);
    }
    for(int i =0 ; i<2; i++){
        printf("\n");
    printf("Name :%s\n",arr[i].name);
    printf("Age :%d\n",arr[i].age);
    printf("No-Of-Matches :%d\n" ,arr[i].matches);
    printf("Average :%f\n",arr[i].average);
    printf("No-Of-Hundreds is :%d ",arr[i].hundreds);
    }
    return 0;
}
// void printinfo(cric arr[],int n){
//     printf("Format is  : %s\n",arr[n].format);
//     printf("Name :%s\n",arr[n].name);
//     printf("Age :%d\n",arr[n].age);
//     printf("No-Of-Matches :%d\n" ,arr[n].matches);
//     printf("Average :%d\n",arr[n].average);
//     printf("No-Of-Hundreds in format %s is :%d ",arr[n].format,arr[n].hundreds);
// }
