
//Boolean and Comparison Operation

#include <stdio.h>
#include <stdbool.h> //

int main() {

//we using the bool keyword
bool value1 = true;
bool value2 = false;

//to print boolean values, we will %d to convert the bool variable into integar


//1 to boolean => true;
//0  to boolean => false
printf("%d", value1);// 1=> true 
printf("\n%d", value2);// 0=> false

//C is case-sensitive, if the is highlight as True and False as these, it print errors
 //to use greater than in C

bool value3 = (12 > 6);
// bool value3 = (12 < 6); 0=> false
printf("\n%d", value3);// 1=> true

 //to use less than in C
bool value4 = (0 < 6);
printf("\n%d", value4);// 1=> true

// to use equal to operator
bool value5 = (6 == 6);
//bool value5 = (6 == 0); // 0=> false
printf("\n%d", value5);// 1=> true

// to use not equal to operator
bool value6 = (8 != 7);
printf("\n%d", value6);// 1=> true

// to use greater than or equal to
bool value7 = (8 >= 10);
printf("\n%d", value7);// 0=> false

// to use less than or equal to
bool value8 = (8 <= 10);
printf("\n%d", value8);// 1=> true

 // to run => gcc Boolean.c -o Boolean && Boolean.exe
}