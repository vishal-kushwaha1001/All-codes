#include<stdio.h>
// write a program to store 10 at every indexex of 2D matrice with 5 row and 5 column.

void main(){ int matrices[5][5];
 for(int i=0;i<5;i++){
        for(int j =0; j<5;j++ ){
           matrices[i][j] = 10;
           printf("%d ",matrices[i][j]);
        }
        printf("\n");

}
}