#include <stdio.h>

int main(){

    // Multidimension array stores array with multiple values

//1. intialisation of the array
    
    int arr[2][3] = {{1, 2, 3}, {2, 4, 6}};// tow dimensional array

//2. to access the array
    printf("\n%d", arr[0][0]);// 1
    printf("\n%d", arr[1][2]);//6

//3. Change multidimensional array with array index
   //to change
    int arr_1[2][3] = {{1, 2, 5}, {2, 4, 7}};
    printf("\n%d", arr_1[0][2]); // 5 which was previously 3
    printf("\n%d", arr_1[1][2]); // 7 which was previously 6

//4. Multidimensional array and for loop
    int arr_3[2][3] = { {1, 3, 5}, {2, 4, 6}};

    for (int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\n%d", arr_3[i][j]);
        }
        printf("\n");
    }

    //Quiz
    int arr_4[1][4] = {{3, 6, 9, 12}, {2, 4, 6, 8}};
    printf("\n%d", arr_4[1][4]);

} // to run =>  gcc MultidimensionalArray.c -o MultidimensionalArray && MultidimensionalArray.exe
