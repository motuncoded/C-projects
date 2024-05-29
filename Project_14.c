/*create a program to change the value of a variable using a pointer
get the input for a double variable salary
assign the address of the salary to a double and print the value of salary, increase the salary by 2 times , print the new salary


*/

#include <stdio.h>
int main(){

    double salary;
    double *ptr_salary = &salary;
    printf("Enter your salary: ");
    scanf("%lf", ptr_salary);
    printf("Your salary is: %.2f\n", *ptr_salary);
     *ptr_salary = salary *2;
     printf("The salary is: %.2f\n", *ptr_salary);


} // to run =>  gcc Project_14.c -o Project_14 && Project_14.exe
