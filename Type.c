#include <stdio.h>


int main (){
    //adding different type of variable gives different resuilts

    int a = 4;
    int b = 5;
    int results = a + b;
    printf("Results = %d", results); //9


    char c = "z";// change to "5"
    int d = 20;
    int results1 = c + d;

    printf("\nResults = %d", results1); //133 (5)=> 73
    //  char c is converted to ASCII number which is "z" = 113 and it is added to 20

  double e = 4.97;
    int f = 20;
    int results2 = e + f;
    double results3 = e + f;
    printf("\nResults = %d", results2); // 24 and not 24.97 since it is converted back to integar
    printf("\nResults = %f", results3);// 24.970000


    int g = 4;
    int h = 7;

    double results4 = 4 * 7;
    printf("\nResults = %f", results4);// 28.000000



    return 0;

}//to run => gcc  Type.c -o Type && Type.exe