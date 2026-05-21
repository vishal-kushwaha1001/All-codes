#include<stdio.h>
int main (){
    int n;
    printf("input rows : ");
    scanf("%d",&n);
     
     int uppercase = 65;
     int lowercase =97;
      for ( int i = 1 ; i<=n ; i++){
        for( int j = 1 ; j <=i ; j++){
            if( (i+j)%2 == 0){printf("%c ",uppercase);}
            else {printf("%c ",lowercase);}
            uppercase++;
            lowercase++;

        }
        printf("\n");
      }
}