/*Create a program that computes the average marks of a student.
Create and array that stores the marks of 5 subjects;
Compute the total marks by adding all the marks;
Divide the total marks by the total number of subjects;
Print the average marks. */

#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks: ");
        scanf("%d", &marks[i]);
        total = marks[i] + marks[i];
    }
    printf("\nThe sum is: %d: ", total);
    printf("\nThe average marks is: %d\n", total / 5);
    return 0;

} // to run =>  gcc Project_12.c -o Project_12 && Project_12.exe
