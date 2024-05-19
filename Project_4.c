#include <stdio.h>


int main(){

// A Simple Calculator in SWitch Statement
int num_1, num_2, result;
char operator;

printf("Enter the first digit:\n");
scanf("%d", &num_1);
printf("Enter the second digit:\n");
scanf("%d", &num_2);
printf("Enter the operator:\n");
scanf(" %c", &operator);


switch (operator){
case '+':
    result = num_1 + num_2;
    break;
case '-':
    result = num_1 - num_2;
    break;
case '*':
    result = num_1 * num_2;
    break;
case '/':
    result = num_1 / num_2;
    break;

default:
    printf("\nInvalid operation");
}

printf("Result = %d", result);




}// to run =>  gcc Project_4.c -o Project_4 && Project_4.exe