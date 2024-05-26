#include <stdio.h>
#include <math.h>


int main(){

//create a program that compute the result of a raised number to the power of the sqrt of a number

int num;
//take an input
printf("Enter a number :" );
scanf("%d", &num);// 

//compute the sqrt
int sqrt_1 = sqrt(num);

//compute the power
int power = num * sqrt_1;

//print the result
printf("The sqrt is %d", sqrt_1);
printf( "\nThe power is %d ", power);



}// to run =>  gcc Project_10.c -o Project_10 && Project_10.exe

   