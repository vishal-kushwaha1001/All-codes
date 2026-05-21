#include <stdio.h>
#include <stdlib.h>
// dynamically memeory allocation
int main(){
    int n;
    printf("input no-of elements : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("sorry! Unable to allocate \n");
    }

    int *p = ptr;
    printf("Input element : ");
    for (int i = 1; i <= n; i++){
        scanf("%d", &(*ptr));
        ptr++;
    }
    // print element
    printf("your element is :");
    for (int i = 1; i <= n; i++){
        printf("%d\t", *p);
        p++;
    }
    

    free(ptr);
    printf("\nfree pointer successfuly  \n");


    return 0;
}