#include <stdio.h>
int main(){

    //aceessing array with pointers

    int number[5] = {1,3,5,7,9};
    for(int i = 0; i < 5; ++i){
        printf("%d = %p\n", number[i], &number[i]); // 1 = 0061FF08 3 = 0061FF0C 5 = 0061FF10 7 = 0061FF14 9 = 0061FF18
     printf("%d = %p\n", number[i], &number + i);
   
    }
    printf("Array address of 1: %p", number);       // Array address of 1: 0061FF08
    printf("\nArray address of 2: %p", number + 1); // Array address of 2: 0061FF0C
    printf("\nArray address of 3: %p", number + 2); // Array address of 3: 0061FF10

    //changinh the array element using pointers


    int number_1[5] = {1, 3, 5, 7, 9};
    *number_1 = 2;
    *(number_1 + 4) = 11;
    printf("\nFirst number: %d", *number_1);      // First number: 2
    printf("\nLast number: %d", *(number_1 + 4)); //Last number: 11
    

    

    return 0;

} // to run =>  gcc Pointer_1.c -o Pointer_1 && Pointer_1.exe