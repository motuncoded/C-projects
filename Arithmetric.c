/* Arithmetric Operator
+ Addition
- Subtraction
* Multiplication
/ Division
% Reminder
++ Increment
-- Decrement
*/

int main (){
    //addition
    int x = 18;
    printf("Result : %d", x + 20);// 38

    int add = x + 18;
    printf("\nResult : %d", add);// 36
    double y = 12.67;
    printf("\nResult : %f", y + 19.67);//  32.340000

    //Subtraction
    int subtract = x - 2;
    printf("\nResult : %d", subtract);// 16

    //Multiplication
    int multiply = x * 4;
    printf("\nResult : %d", multiply);// 72

    //  Division
    int divide = x / 2;
    printf("\nResult : %d", divide);// 9

    //Reminder
    int remainder = x % 4;
    printf("\nResult: %d", remainder);// 2

    //Increment 
    int increment = ++x;
    printf("\nResult: %d", increment);// 19

    //Decrement
    printf("\nResult: %d", --x);// 17

    return 0;

}//to run => gcc  Arithmetric.c -o Arithmetric && Arithmetric.exe