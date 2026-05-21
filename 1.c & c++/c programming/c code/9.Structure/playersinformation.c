#include<stdio.h>
#include<string.h>

typedef struct platerDetails{
 
    char name[20];
    char country[20];
    int age;
    float average;
    float strikeRate;
} pd;
 void printinfo(pd arr[],int i);

int main(){ 
    int n = 3;
    pd arr[n];
    for(int i =0 ; i<n;i++){
        printf("input name : ");
        scanf("%s",arr[i].name);
        printf("input country : ");
        scanf("%s",arr[i].country);
        printf("input age : ");
        scanf("%d",&arr[i].age);
        printf("input average :");
        scanf("%f",&arr[i].average);
        printf("input strikeRate : ");
        scanf("%f",&arr[i].strikeRate);
    }
    // search name of player
    char searchName[30];
    printf("search name of player : ");
    scanf("%s",searchName);

    for(int i =0 ; i<n; i++){
        if(strcmp(arr[i].name,searchName)==0){
            printinfo(arr,i);
        }
    }
    return 0;
}
void printinfo(pd arr[],int n){
    printf("\n");
    printf("Name of player:%s\n",arr[n].name);
    printf("country :%s\n" ,arr[n].country);
    printf("Age :%d\n",arr[n].age);
    printf("Average :%f\n",arr[n].average);
    printf("strikerate :%f\n ",arr[n].strikeRate);
}