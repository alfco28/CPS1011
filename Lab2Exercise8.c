#include <stdio.h>
#include <math.h>

float rzetaf(float s, int iters){
    int n;
    float ans = 0;
    for(n = 1; n <= iters; n++){
        ans += pow(n, -s);
    }
    return ans;
}

int main(){
    int max;
    float x;
    printf("Enter a real number to evaluate the Riemann zeta function in that point: ");
    scanf("%f", &x);
    printf("\nEnter an integer greater than 0 to approximate Reimann zeta function: ");
    scanf("%i", &max);
    printf("The result is: %.4f.\n", rzetaf(x, max));
    return 0;
}
