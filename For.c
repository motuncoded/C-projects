/*
for loop
 for (int i = 0; testExpression; updateExpression){
    block of code
 }

*/
#include <stdio.h>

int main(){
// for (int i = 0; i<10; i++){
//     printf("%d\n", i); //0123456789
// }

int sum = 0;
for (int i = 1; i <= 100; i++){
    sum = sum + i;
}
    printf("%d", sum);// 5050

    int num = 0;
    for (int i = 2; i <= 100; i = i+ 2){
        num = num + i;
        }
        printf("%d\n", num);// 2550


}// to run =>  gcc For.c -o For && For.exe

