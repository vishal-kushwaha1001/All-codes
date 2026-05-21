#include<stdio.h>
int main (){
    int n , m;
    printf("input rows : ");
    scanf("%d",&n);
     
    
      for ( int i = 1 ; i<=n ; i++){
        for( int j = 1 ; j <=n ; j++){
            if ( i == 1 || i== n ||j ==1 || j== n){ printf("%d ", n);}
            else if ( i == 2 || j == 2|| j == n-1 || i== n-1){printf("%d ", n-1);}
             else if ( i == 3 || j == 3|| j == n-2 || i== n-2){printf("%d ", n-2);}
              else if ( i == 4 || j == 4|| j == n-3 || i== n-3){printf("%d ", n-3);}
                else printf("%d ",n-4);
            
           
        }
        printf("\n");
      }
}