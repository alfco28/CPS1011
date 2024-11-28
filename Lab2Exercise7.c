#include <stdio.h>

int fact(int n){
    int ans = 1;
    if(n < 0){
        printf("The factorial of a negative number is not defined. The result is given as 0 as an error.");
        ans = 0;
        return ans;
    }
    else{
        if(0 < n){
            ans = n * fact(n - 1);
        }
    }
    return ans;
}

int main(){
    int num;
    printf("Enter an integer greater than or equal to 0 to calculate its factorial: ");
    scanf("%i", &num);
    printf("Its factorial is: %i.\n", fact(num));

    return 0;
}
