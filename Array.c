#include <stdio.h>

int main(){

// datatype arrayName[arraySize] = {....}

//to create array
int age[5] = {21, 34, 28, 32, 45};

// In the above example, `age` is an array of integers with a size of 5. The values inside the curly braces are the elements of
// the array.
// Accessing Array Elements
// 1. To access an element of an array,
// you use the array name followed by the index of the element in square brackets `[]`.The index starts from 0,
// so the first element is at index 0, the second element is at index 1, and so on.
     printf("%d\n", age[0]);// 21
     printf("%d\n", age[1]);// 34
     printf("%d\n", age[2]);// 28
     printf("%d\n", age[3]);// 32
     printf("%d\n", age[4]);// 45




    //  2. You can also use a variable as an index. For example:
     int i = 2;
     printf("%d\n", age[i]);// 28
    //  Note: If you try to access an element outside the array size, it will result in undefined behavior. For example, `age[5]
    //  is undefined because the array size is 5, and the maximum index is 4.

    //  3. You can also change the array element

     age[2] =39;
     printf("%d\n", age[2]);// 39

     int number[6];
     printf("Enter 6 values: ");
     for(int i=0; i<6; i++){
        scanf("%d", &number[i]);
        }
        for(int i=0; i<7; i++){
        printf("%d ", number[i]);
        }

    
     return 0;
}// to run =>  gcc Array.c -o Array && Array.exe
