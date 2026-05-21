#include<stdio.h>

int main()
{char star = '*';
char *ptr = &star;
    printf("ptr=%u\n", ptr);
    ptr++;
    printf("ptr=%u\n", ptr);
    ptr--;
    printf("ptr=%u\n", ptr);
    printf("ptr=%d\n", *ptr);
    
    return 0;
}