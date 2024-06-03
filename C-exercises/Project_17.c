//Programming task

/*
Create a program to find the differences
between three complex numbers.

Perform the subtraction between
  complex numbers by subtracting the
  real part of one complex number from
  other complex numbers and same for
  the imaginary part too.

*/
#include <stdio.h>

typedef struct Complex
{
    double real;
    double imagine;
} complex;

int main()
{

    complex c1 = {.real = 45.34, .imagine = 15};
    complex c2 = {.real = 21.34, .imagine = 30};
    complex c3 = {.real = 13.34, .imagine = 10.5};

    complex sub;

    sub.real = c1.real - c2.real - c3.real;
    sub.imagine = c1.imagine - c2.imagine - c3.imagine;

    printf("Result is %.2lf - %.2lf", sub.real, sub.imagine);

    return 0;
} // to run =>  gcc Project_17.c -o Project_17 && Project_17.exe
