#include <stdio.h>

int main(){
// using break in loop
    for (int i = 1; i <= 5; i++){
        printf("%d\n", i);
        break;
    }; // 1

    int a;
    for (int a = 1; a <= 5; a++){
        if(a == 3){
        break;
        }
        printf("%d\n", a);

    };// 1, 2

    while(1){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
         if(number >2){
             break;
         };
         printf("%d\n", number);
    }


//continue
   for (int j = 1; j <= 5; j++){
        printf("%d\n", j);
        continue;
    }; // 1
 while(1){
        int number_1;
        printf("Enter a number: ");
        scanf("%d", &number_1);
         if(number_1 > 2){
             continue;
         };
         printf("%d\n", number_1);
    }

    return 0;
}// to run =>  gcc Break.c -o Break && Break.exe
