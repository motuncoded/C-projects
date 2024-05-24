#include <stdio.h> // standard  library function for printf
#include <math.h> // stanadard library function for mathematically operstion
#include <ctype.h> // standard libraray function for character classification functions

int main(){
    // mathematical operation
    int number_1 = 169;
    int result_1 = sqrt(number_1);
    printf("The square root of %d is %d", number_1, result_1); //The square root of 69 is 13

   
    double base = 2.0;
    double exponent = 3.0;
    double result_2 = pow(base, exponent);
    printf("\nThe power of %1f is %lf", base, result_2);//The power of 2.000000 is 8.000000

    int number_3 = 27;
    int result_3 = cbrt(number_1);
    printf("\nThe cube root of %d is %d", number_3, result_3); 

    // character classification

    char alpha;
    alpha = 'e';
    char upper = toupper(alpha);
    printf("\n%c ", upper);

    char beta;
    beta = 'G';
    char lower = tolower(beta);
    printf("\n%c ", lower);


}// to run =>  gcc Library.c -o Library && Library.exe