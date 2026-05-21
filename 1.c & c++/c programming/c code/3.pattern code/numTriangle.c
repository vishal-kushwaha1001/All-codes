#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows here :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            printf("%d",j);
            
        }
        printf("\n");
    }
}