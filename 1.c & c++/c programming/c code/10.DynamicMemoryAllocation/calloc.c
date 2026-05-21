#include <stdio.h>
#include <stdlib.h>
// dynamically continouous allocation
int main(){
    int n;
    printf("input no-of characters : ");
    scanf("%d", &n);
    char *ptr = (char *)calloc(n ,sizeof(char));
      if(ptr==NULL){
        printf("sorry! Unable to allocate \n");
    }

    char *p = ptr;
    printf("Input characters : ");
    for (int i = 0; i <= n; i++){
        scanf("%c", &(*ptr));
        ptr++;
    }
    // print element
    printf("your character is :");
    for (int i = 0; i <= n; i++){
        printf("%c ", *p);
        p++;
    }

    free(ptr);
    printf("\nfree pointer successfuly  \n");

    return 0;
}