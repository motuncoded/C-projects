#include <stdio.h>

int main() {
    int age;
    printf("Enter any age: ");
    scanf("%d", &age);
    printf("Age = %d", age);
// for double and character;
    double number;
    printf("\nEnter any number: ");
    scanf("%lf", &number);
    printf("Number = %lf", number);

    char alphabet;
    printf("\nEnter any alphabet: ");
    scanf("%c", &alphabet);
    printf("\nNumber = %c", alphabet);

    // to include both on the function
    //scanf("%lf %c", &number, &alphabet)

}// to run =>  gcc UserInput.c -o UserInput && UserInput.exe