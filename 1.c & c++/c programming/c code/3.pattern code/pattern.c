#include<stdio.h>
int main (){ // experiment failed
    int n , m;
    printf("input rows : ");
    scanf("%d",&n);
    // printf("input column : ");
    // scanf("%d",&m);
     
    
      for ( int i = 1 ; i<=n ; i++){
        for( int j = 1 ; j <=n ; j++){
            // if ( i == 1 || i== n ||j ==1 || j== n){ printf("%d ", n);}
            // else if ( i == 2 || j == 2|| j == n-1 || i== n-1){printf("%d ", n-1);}
            //  else if ( i == 3 || j == 3|| j == n-2 || i== n-2){printf("%d ", n-2);}
            //   else if ( i == 4 || j == 4|| j == n-4 || i== n-4){printf("%d ", n-4);}
            //     else printf("%d ",n-5);
            for ( int k = 2 ; k <= n ; k++){
                 if ( i ==k-1 || i== n-(k-2) ||j ==k-1|| j== n -(k-2)){ printf("%d ", n-(k-2));}
            }
           
        }
        printf("\n");
      }
}