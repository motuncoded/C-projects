/*
Write a C program that takes an integer as input from the user 
and checks if the number is prime. If the number is prime, 
the program should print "The number is prime."
 Otherwise, it should print "The number is not prime."
 */

#include <stdio.h>



 Otherwise, it should print "The number is not prime.



"*/

#include <stdio.h>



int is_prime(int num){
  if(num <= 1){
    return 0;

  }
  for (int i = 2; i * i <= num; i++){
    if(num % i == 0){
      return 0;
    }
  }
  return 1;
}
int main(){
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  if (is_prime(num)) {
        printf("The number is prime. \n");
      }else(
        printf("The number is not prime. \n")
        );

} // to run =>  gcc Day2.c -o Day2 && Day2.exe

