#include <stdio.h>

// write a program to store roll no and marks obtained by 10 student side by side in matrix by user.
int main()
{
    int matrix[10][2];

    int rollno = 1;

    // intialisation
    for (int i = 0; i < 10; i++)
    {
        int marks;
        printf("input marks : ");
        scanf("%d", marks);
        for (int j = 0; j < 2; j++)
        {

            matrix[i][j] ;
        }
        rollno++;
    }
    printf("Roll no  | marks \n");
    // OUTPUT
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d | ", matrix[i][j]);
        }
        printf("\n");
    }
}
