#include <stdio.h>

int main() {
    int age;
    printf("Enter any age: ");
    scanf("%d", &age);
    printf("Age: %d", age);
    if(age >= 18){
        printf("\nYou are eligible for voting");
    } else{
        printf("\nYou are not eligible for voting");
    }



}//to run => gcc Voting.c -o Voting && Voting.exe