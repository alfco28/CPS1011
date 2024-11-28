#include <stdio.h>
#include <string.h>

void employee(int index, char name[], char surname[], float age, float salary){ //Prints one row with all the information required of one employee.
    int count;
    int end = 0;
    printf("%-3i ", index);
    for(count = 0; count < 10; count++){ //It prints the name.
            if(name[count] == '\0'){
                end = 1;
            }
            if(end){
                printf(" ");
            }
            else{
                printf("%c", name[count]);
            }
        }
        printf("  ");
        end = 0;
        for(count = 0; count < 10; count++){ //It prints the surname.
            if(surname[count] == '\0'){
                end = 1;
            }
            if(end){
                printf(" ");
            }
            else{
                printf("%c", surname[count]);
            }
        }
        printf("  %-4.0f %-15.2f %.2f\n", age, salary, salary * 13);
}

int main(){
    char names[10][100], surnames[10][100];
    float ages[10], salaries[10];

    int i;
    for(i = 0; i < 5; i++){ //Information collection.
        printf("Name of employee No %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Surname of employee No %d: ", i + 1);
        scanf("%s", surnames[i]);
        printf("Age of employee No %d: ", i + 1);
        scanf("%f", &ages[i]);
        printf("Salary of employee No %d: ", i + 1);
        scanf("%f", &salaries[i]);
        printf("\n");
    }
    
    printf("\n    Name        Surname     Age  Monthly salary  13-months salary\n"); //Column headings.
    for(i = 0; i < 5; i++){ //It displays the content of the table for each row.
        employee(i + 1, names[i], surnames[i], ages[i], salaries[i]);
    }


    printf("\n\n\n");
    for(i = 5; i < 10; i++){ //Information collection.
        printf("Name of employee No %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Surname of employee No %d: ", i + 1);
        scanf("%s", surnames[i]);
        printf("Age of employee No %d: ", i + 1);
        scanf("%f", &ages[i]);
        printf("Salary of employee No %d: ", i + 1);
        scanf("%f", &salaries[i]);
        printf("\n");
    }
    
    printf("\n    Name        Surname     Age  Monthly salary  13-months salary\n"); //Column headings.
    for(i = 5; i < 10; i++){ //It displays the content of the table for each row.
        employee(i + 1, names[i], surnames[i], ages[i], salaries[i]);
    }

    float average = 0;
    for(i = 0; i < 10; i++){
        average = average + salaries[i];
    }
    average = average/10;
    printf("\n\n\n\nThe average monthly salary is: %.2f.\nThe average 13-months salary is: %.2f.\n", average, average * 13);
    
    //I don't undestand what does it mean "salary precision" asked in 2.e, since it is money it can only have 2 decimal numbers.
    return 0;
}
