#include <stdio.h>
// fptr = fopen("filename", mode )
int main()
{
    FILE *fptr, *dfptr;
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("error : file not exit\n");
    }

    dfptr = fopen("dest.txt", "w");
    if (dfptr == NULL)
    {
        printf("error : file not exit\n");
    }
    
    char word;
    while ((word = fgetc(fptr)) != EOF)
    {
        fputc(word,dfptr);
        printf("%c", word);
    }
    printf(" : copy successful");
    fclose(dfptr);

    fclose(fptr);
    return 0;
}