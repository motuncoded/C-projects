#include <stdio.h>


int main(){

//test_condition ? expression_1 : expression_2;
int age = 12;

(age >=15) ? printf("You can vote\n") : printf("You cannot vote\n");// You cannot vote

char operator = '+';
int num_1 = 7;
int num_2 = 4;

int result = (operator == '+') ? (num_1 + num_2) : (num_1 - num_2);
printf("%d", result);

return 0;

}// to run =>  gcc Tenary.c -o Tenary && Tenary.exe