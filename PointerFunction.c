#include <stdio.h>




int squareNumber(int number){
    int square = number * number;
    return square;
}

void findValue(int* num){
    *num = 10;

}
void findSquare(int* numb){
    int square_1 = *numb * *numb;
}
int* addNumber(int* num_1, int* num_2){
    int* sum = *num_1 + *num_2;
}
int main(){
// SquareNumber without pointer
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int square = squareNumber(number);
    printf("The square of %d is %d\n", number, square);

// findValue function with pointer
    int num = 21;
    findValue(&num);
    printf("Number: %d", num);


// findsquare function with pointer
    int numb = 5;
    findSquare(&numb);
    printf("\nSquare of %d is %d\n", numb, numb * numb); // 

//add numbers with pointer
    int* num_1, num_2;
    printf("Enter a number: ");
    scanf("%d", &num_1);
    printf("Enter a number: ");
    scanf("%d", &num_2);
    int* result = addNumber(&num_1, &num_2);
    printf("The sum of %d and %d is %d\n", num_1, num_2, result);
    return 0;

} // to run =>  gcc PointerFunction.c -o PointerFunction && PointerFunction.exe