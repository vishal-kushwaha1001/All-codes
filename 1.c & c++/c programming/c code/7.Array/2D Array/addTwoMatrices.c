#include <stdio.h>
void main() {
    int n;
    printf("input size : ");
    scanf("%d",&n);
    int matrice1[n][n], matrice2[n][n], matrice3[n][n];
    printf("input value in matrice1 : ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrice1[i][j]);
            }
        }
    printf("input value in matrice2 : ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrice2[i][j]);
            }
        }
    printf("sum of matrice1 and matrice2 is  : \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrice3[i][j] = matrice1[i][j] +matrice2[i][j]; 
                printf("%d ",matrice3[i][j]);      
            }
            printf("\n");
        }
    }
