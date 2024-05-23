#include <stdio.h>

//  void calculateSquare(int num){
//     int square = num * num;
//     printf("\nSquare of %d is %d", num, square); // global scope Square of 5 is 25
//   }
int calculateSquare(int num)
{
    int square = num * num;
    return result;
  }

  int main(){
         // calculateSquare(5); //Square of 5 is 25
          //printf("\nSquare of %d is %d", num, square); // variable scope produces error to solve this
         int result = calculateSquare(2);
         printf("Result is %d ", result);

  } // to run =>  gcc Scope.c -o Scope && Scope.exe
