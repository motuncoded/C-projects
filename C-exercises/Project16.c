/*
Create a program to find the multiplication of
    two numbers using a function and pointers.
Create a function that accepts three
      pointers.
Inside the function multiply values of two
      pointers and assign the result to the address
      of the third pointer.
Inside the main function, create three
      variables, two variables with values 13 and 9
      and the third variable to store their product.
Call the function with addresses of the 3
      variables as arguments.
 Store the returned value inside a pointer and
      print the value pointed by the returned
      address.


*/
#include <stdio.h>

int* multipyNumber(int* num_1, int* num_2, int* num_3){
    *num_3 = *num_1 * *num_2;
}

int main(){
    int num_1 = 13;
    int num_2 = 9;
    int num_3;
    int* result = multipyNumber(&num_1, &num_2, &num_3);
    printf("The product of %d and %d is %d\n", num_1, num_2, num_3);
    return 0;
    

} // to run =>  gcc Projec_16.c -o Projec_16 && Projec_16.exe
