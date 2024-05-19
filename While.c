/*

while(condition){
    statement inside while
}

*/

#include <stdio.h>

int main(){
//     while(1 < 5){
//         printf("Hello\n");
//     }

    int count = 0;
    while(count < 5){
        printf("Hello\n");
        count = count + 1;
    }
    return 0;


}// to run =>  gcc While.c -o While && While.exe