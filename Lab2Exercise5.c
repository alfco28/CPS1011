#include <stdio.h>
#define DAYSperWEEK 7

void weeks(int n[]){
    int nweeks, ndays, j;
    for(j = 0; j < 10; j++){
        nweeks = n[j] / DAYSperWEEK;
        ndays = n[j] % DAYSperWEEK;
        switch(j + 1){
        case 1:
            printf("\nThe %i st number of days (%i) is equivalent to: %i weeks and %i days.\n", j + 1, n[j], nweeks, ndays);
            break;
        case 2:
            printf("The %i nd number of days (%i) is equivalent to: %i weeks and %i days.\n", j + 1, n[j], nweeks, ndays);
            break;
        case 3:
            printf("The %i rd number of days (%i) is equivalent to: %i weeks and %i days.\n", j + 1, n[j], nweeks, ndays);
            break;
        
        default:
            printf("The %i th number of days (%i) is equivalent to: %i weeks and %i days.\n", j + 1, n[j], nweeks, ndays);
            break;
        }
    }
    
}

int main(){
    int i;
    int number[10];
    for(i = 0; i < 10; i++){
        switch(i + 1){
        case 1:
            printf("Enter the %i st number: ", i + 1);
            break;
        case 2:
            printf("Enter the %i nd number: ", i + 1);
            break;
        case 3:
            printf("Enter the %i rd number: ", i + 1);
            break;
        
        default:
            printf("Enter the %i th number: ", i + 1);
            break;
        }
        scanf("%i", &number[i]);
    }
    weeks(number);

    return 0;
}