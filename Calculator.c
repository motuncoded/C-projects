#include <stdio.h>


int main(){
// simple calculator

int num_1;
int num_2;
char operator;

printf("Enter the first digit:\n");
scanf("%d", &num_1);
printf("Enter the second digit:\n");
scanf("%d", &num_2);
printf("Enter the operator:\n");
scanf(" %c", &operator);

if(operator == '+'){
    printf("Result = %d", num_1 + num_2);
}
else if(operator == '-'){
    printf("Result = %d", num_1 - num_2);
}
else if(operator == '/'){
    printf("Result = %.2f", num_1 / num_2);
}
else if(operator == '*'){
    printf("Result = %d", num_1 * num_2);
}
    

        return 0;

}// to run =>  gcc Calculator.c -o Calculator && Calculator.exe