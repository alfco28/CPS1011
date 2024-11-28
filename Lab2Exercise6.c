#include <stdio.h>
#define USDtoEUR 0.9482

int main(){
    int i;
    float usd[10];
    for(i = 0; i < 10; i++){
        printf("\n%i. Enter an amount of USD to be converted to EUR: ", i + 1);
        scanf("%f", &usd[i]);
        printf("That amount is equivalent to %.2f EUR.\n", usd[i] * USDtoEUR);
    }
    return 0;
}
