#include <stdio.h>

int main(){
 //Can you write a program that take in an input from a user and printit if the value is a negative odd number and print "not a negative odd number" if it is not a negative odd number
 
int num;
printf("Enter a number :" );
scanf("%d", &num);
if(num%2==0){
    printf("not a negative odd number");
}
else if(num<0){
    printf("not a negative odd number");
}

 //Can you write a program that take in an input from a user and print it if the value is a negative odd number if the input value is positive end the loop with a message if the input value is negative even, skipthe vlue with message negative even
int n;
printf("\nEnter a number :" );
scanf("%d", &n);
    while (1) {
    if(n > 0){
        printf("Positive Value");
        break;
    } else if (n < 0 && n % 2 == 0) {
        printf("Negative Even ");
        break;
    } else if (n < 0 && n % 2!= 0) {
        printf("Negative Odd");
        break;
   };

    }
}// to run =>  gcc Project_8.c -o Project_8 && Project_8.exe
