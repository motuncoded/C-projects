#include <stdio.h>
//Create a program that computes the factorial
// 	of a number.
// 	• Take input from user
// 	• Pass the input value to a function.
// 	• Inside the function check if the number is
// 	greater than O.
// 	• If true, return number multiplied by a
// 	recursive call to the function with
// 	parameter 1 less than number
// 	Otherwise, return 1. */



int factorial(int n);

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
int factorial(int n){
    if(n > 0){
        return n * factorial(n - 1);
    }else{
        return n+1;
    }
}// to run =>  gcc Project_11.c -o Project_11 && Project_11.exe

      