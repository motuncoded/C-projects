/*
Write a C program that takes an integer n as input from the user, 
and then takes n integers as input from the user. 
The program should calculate the average of these n integers 
and print the result to the console.
*/

#include <stdio.h>
int main(){
    int n, i, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 0; i < n; i++){
        printf("Enter integer %d: ", i+1);
        scanf("%d", &num);
        sum += num;
    }
    float average = (float)sum / n;
    printf("The sum of the %d integers is: %d\n", n, sum);
    printf("\nThe average of the %d integers is: %.2f\n", n, average);


}// to run =>  gcc Day.c -o Day && Day.exe