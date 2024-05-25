#include <stdio.h>



//multiplication table
int main(){

//upwards multiplication


    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    int count = 1;
     while(count <= 12){
         int product = number * count;
         printf("%d * %d = %d\n",number, count, product);
         count = count + 1;
        }
     return 0;


    // downwards multiplication
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    int count = 12;
    while(count >= 1){
        int product = number * count;
        printf("%d * %d = %d\n",number, count, product);
        count = count - 1;
        }
        

}// to run =>  gcc Project_6.c -o Project_6 && Project_6.exe