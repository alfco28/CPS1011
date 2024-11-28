#include <stdio.h>
#include <string.h>

int main(int, char**){
    char w1[40], w2[40], w3[40];

    printf("Write the first word (maximum of 40 characters):\n");
    scanf("%s", w1);

    printf("Write the second word (maximum of 40 characters):\n");
    scanf("%s", w2);

    printf("Write the third word (maximum of 40 characters):\n");
    scanf("%s", w3);

    int i;
    printf("The first word in reverse order is: ");
    for(i = strlen(w1); i >= 0; i--){
        printf("%c", w1[i]);
    }
    printf("\n");

    printf("The second word in reverse order is: ");
    for(i = strlen(w2); i >= 0; i--){
        printf("%c", w2[i]);
    }
    printf("\n");

    printf("The third word in reverse order is: ");
    for(i = strlen(w3); i >= 0; i--){
        printf("%c", w3[i]);
    }
    printf("\n");

    return 0;
}
