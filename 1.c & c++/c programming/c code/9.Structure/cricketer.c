#include<stdio.h>
#include<string.h>

typedef struct cricketer{
 
    char name[20];
    int age;
    int matches;
    int average;
    int hundreds;
} cric;
 void printinfo(cric arr[],int i);

int main(){ 
    int size = 3;
    cric arr[size];
    for(int i =0 ; i<size;i++){
        printf("input name : ");
        fgets(arr[i].name,20,stdin);
        printf("input matches : ");
        scanf("%d",&arr[i].matches);
        printf("input age : ");
        scanf("%d",&arr[i].age);
        printf("input average :");
        scanf("%d",&arr[i].average);
        printf("input hundreds : ");
        scanf("%d",&arr[i].hundreds);
    }
    for(int i =0 ; i<2 ; i++){
        printinfo(arr,i);
    }
    return 0;
}
void printinfo(cric arr[],int n){
    printf("\n");
    printf("Name :%s\n",arr[n].name);
    printf("Age :%d\n",arr[n].age);
    printf("No-Of-Matches :%d\n" ,arr[n].matches);
    printf("Average :%d\n",arr[n].average);
    printf("No-Of-Hundreds is :%d ",arr[n].hundreds);
}
