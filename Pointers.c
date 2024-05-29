#include <stdio.h>
//pointers


int main(){
    int a = 10;
    printf("%p", &a); //0061FF1C this give the memory address
    int* ptr = &a;
    printf("\n%p", ptr); // 0061FF18
//to access the variable
     printf("\nvalue: %d", *ptr);// 10
//to change the value
    // *ptr = 20;
    printf("\nvalue: %d", a); //20
    int b = 56;
    // *ptr = &b;
    int* ptr = &b;
    printf("\nvalue: %d", *ptr); //56

    //NB
    // int number = 30;
    // ptr = number // invalid
    // ptr = &number // valid
    // *ptr = &number; //invalid
    // *ptr = number; //valid

    return 0;



} // to run =>  gcc Pointers.c -o Pointers && Pointers.exe
