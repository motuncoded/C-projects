#include <stdio.h>
#include <math.h>
 //printf is a standard library function for #include <stdio.h>
 //sqrt is a standard libary function for #include <math.h>

// function in C
  void  greet(){
      printf("Hello");
  }
  void calculateSquare(int num){
    int square = num * num;
    printf("\nSquare of %d is %d", num, square);
  }
    void calcuateSum(int num_1,int num_2){
    int add = num_1 + num_2;
    printf("\nThe Addition of %d and %d is %d", num_1, num_2, add);
  }

  int calculateSum(int num_1, int num_2); // function prototype
  //  function with return types
int calculateMultiply(int number_1, int number_2) {
    int multiply = number_1 * number_2;
    return multiply;
  }

  int main(){ // this is also a function for the compiler to compile the C program
      greet(); // Hello
      calculateSquare(5); //Square of 5 is 25
      calcuateSum(3, 19); //The Addition of 3 and 19 is 22

      //function with return type
    int number_1 = 3;
    int number_2 = 5;
    int result = calculateMultiply(number_1, number_2);
    printf("\nThe Multiplication of %d and %d is %d", number_1, number_2, result); // The Multiplication of 3 and 5 is 15

    int result_1 = sqrt(49);
    printf("\nThe result of the sqaure root is %d", result_1); //The result of the sqaure root is 7
    return 0;
}// to run =>  gcc Function.c -o Function && Function.exe