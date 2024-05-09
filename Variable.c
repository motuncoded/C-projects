// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //To write variable names in 
//cannoy initialize var twice
    //How to declare varibles in C
    //1. dont start the variable name with digits
    //2. dont start with an underscore
    //3. using uppercase and lowercase can be different in C
    //4. dont use special characters
    //5. using space between variable names are not allowed
    //6. some certain keywords like if, else, else if switch, float etc are not allowd
    int age = 10;
    printf("Age : %d", age);// 10
    float number1 = 10.35;
    printf("\nNumber: %f", number1);// 10.350000
    printf("\nNumber: %.1f", number1);// 10.4
    printf("\nNumber: %.2f", number1);// 10.35
    double number2 = 12.9;
    printf("\nNumber: %1f", number2); // 10.900000

    //To write variable names in
    char character = 'z';
    printf("\nCharacter: %c", character);// z
    printf("\nCharacter: %d", character);// 122
    //sizeof operator
    int age2;
    double number3;
    printf("int size: %zu", sizeof(age2));// 4
    printf("\ndouble size: %zu", sizeof(number3)); //8


    return 0;
    // to run => gcc Variable.c -o Variable && Variable.exe
}