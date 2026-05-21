#include <stdio.h>
#include <string.h>
typedef struct store{
    char name[20];
    float price;
    int quantity;
} store;

float mux(store product[], int n){
    float netPrice = 0;
    for (int i = 0; i < n; i++){
        netPrice = netPrice + product[i].quantity * product[i].price;
    }
    return netPrice;
}
void update(store product[], int incPrice, int incQuantity, int incIndex){
    product[incIndex - 1].price += incPrice;
    product[incIndex - 1].quantity += incQuantity;
}
int main(){
    int n = 2;
    store product[n];
    for (int i = 0; i < n; i++){
        printf("Product Name : ");
        scanf("%s", product[i].name);
        printf("Price : ");
        scanf("%f", &product[i].price);
        printf("Quantity : ");
        scanf("%d", &product[i].quantity);
        printf("\v");
    }

    char ins[5];
    printf("Are you increase price of product ,please give  yes or no : ");
    scanf("%s", ins);
    if (strcmp(ins, "yes") == 0){
        float incPrice;
        printf("Increment price :");
        scanf("%f", &incPrice);
        int incQuantity;
        printf("Increment Quantity : ");
        scanf("%d", &incQuantity);
        int incIndex;
        printf("Increment product index  : ");
        scanf("%d", &incIndex);
        update(product, incPrice, incQuantity, incIndex);
    }

    // print store product list
    printf("\n store product list \n");
    printf("Name \t Quantity  per item price \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", product[i].name);
        printf("%d\t", product[i].quantity);
        printf("%f\t", product[i].price);
        printf("\n");
    }

    printf("Net price is : %f\n", mux(product, n));

}