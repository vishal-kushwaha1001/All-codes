#include <stdio.h>

void main()
{
    char name[] = "VISHAL KUMAR KUSHWAHA";
    char name1[] = {'V', 'I', 'S', 'H', 'A', 'L', ' ', 'K', 'U', 'M', 'A', 'R', ' ', 'K', 'U', 'S', 'H', 'W', 'A', 'H', 'A'};
    int size1 = sizeof(name) / sizeof(name[0]);
    int size2 = sizeof(name1) / sizeof(name1[0]);

    printf("ist string size : %d\n", size1); // automatic contain null character
    for (int i = 0; i < size1; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    printf("2st string size : %d\n", size2); // automatic not  contain null character
    for (int i = 0; i < size2; i++)
    {
        printf("%c", name1[i]);
    }
    printf("\n");
    printf("\n");
    printf("%s", name);

    printf("\n");
    char name2[] = {'V', 'I', 'S', 'H', 'A', 'L', ' ', 'K', 'U', 'M', 'A', 'R', ' ', 'K', 'U', 'S', 'H', 'W', 'A', 'H', 'A', '\0'};

    printf("%s", name2);
}