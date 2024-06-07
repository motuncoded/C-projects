#include <stdio.h>
/*
Create a function that counts the number of digits in a number.
Conversion of the number to a string is NOT allowed.
The number could be negative.
The number is always a whole number, no decimals.

*/

int counting(int num)
{
    int count = 0;
    if (num == 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        num = -num;
    }
    while (num > 0){
        num = num / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num); 
    int result = counting(num);
    printf("The number %d has %d digits.\n", num, result);
    return 0;
}
 // to run =>  gcc Daily_1.c -o Daily_1 && Daily_1.exe
