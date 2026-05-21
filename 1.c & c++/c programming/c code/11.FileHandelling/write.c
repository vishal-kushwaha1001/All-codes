#include <stdio.h>
// fptr = fopen("filename", mode )
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "a");
    if (fptr == NULL)
    {
        printf("error : file not exit\n");
    }
    else
        printf("file open successfully\n");

    char words[30];
    fprintf(fptr, "%s\n", " orange");
    fclose(fptr);

    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("error : file not exit\n");
    }
    fscanf(fptr, "%s", words);
    printf("words is %s \n", words);

    fclose(fptr);
    return 0;
}