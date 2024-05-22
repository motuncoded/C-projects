#include <stdio.h>

// create a function that takes in two number,
// perform multiplication of the numbers and return result;

// int calculateMultiply(int number_1, int number_2) {
//     int multiply = number_1 * number_2;
//     return multiply;
//   }

int calculateMultiple(int num_1, int num_2) {
    int multiple = num_1 * num_2;
    return multiple;
  }
int main(){



    // int number_1 = 5;
    // int number_2 = 10;
    // int result = calculateMultiply(number_1, number_2);
    // printf("The result of multiplication of %d and %d is %d", number_1, number_2, result);
   int num_1, num_2;
    printf("Enter first number :" );
    scanf("%d", &num_1);
    printf("Enter second number :" );
    scanf("%d", &num_2);
    int result = calculateMultiple(num_1, num_2);
    printf("The result of multiplication of %d and %d is %d", num_1, num_2, result);



    return 0;





  }// to run =>  gcc Project_9.c -o Project_9 && Project_9.exe