// Using (switch) statement there is a template to follow
// which is

// switch(expression/ variable){
//     case value_1:
//     body of case_1;
//     break;
// case value_2:
//     body of case_2;
//     break;
// case value_3:
//     body of case_3;
//     break;
// default:
//  body of default;

// }

#include <stdio.h>

int main(){


    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    switch(number){
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        default:
            printf("Invalid number");
    }

    //switch in days of the wweek

    
    int number_1;
    printf("\nEnter a number from 1 to 7: ");
    scanf("%d", &number_1);
    switch(number_1){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break; 
        case 6:
            printf("Friday\n");
            break;
         case 7:
            printf("Satursday\n");
            break;
        default:
            printf("Invalid day");
    }


    //switch im multiple cases
    int number_2;
    printf("\nEnter a number from 1 to 7: ");
    scanf("%d", &number_2);
    switch(number_2){
        case 1:
        case 7:
            printf("\nWeekend");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("\nWeekday");
            break;
        default:
            printf("Invalid day");


    }
}// to run =>  gcc Switch.c -o Switch && Switch.exe