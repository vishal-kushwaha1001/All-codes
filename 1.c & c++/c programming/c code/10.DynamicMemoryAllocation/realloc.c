#include<stdio.h>
#include<stdlib.h>
int main(){ 
    int*ptr = (int*)malloc(5*sizeof(int));
    int i;
    int* ptr_new;
    int *p = ptr_new;
    printf("input element :");
       for ( i = 1; i <= 5; i++){
        scanf("%d", &(*ptr));
        ptr++;
    }
    // realloc element
    printf("\n  now add new  element :");
    ptr_new = realloc(ptr,10*sizeof(int));
    for ( i ; i <= 10; i++){
        scanf("%d", &(*ptr_new));
        ptr_new++;
    }
    
    printf("your realloce element element  is :");
      for (int j = 1; j <= 10; j++){
        printf("%d\t", *p);
        p++;
    }
   
    return 0;

}