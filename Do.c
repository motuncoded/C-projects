#include <stdio.h>


int main(){
// Do expression

/*
do{
}    while(condition);

*/
int count = 1;
do{
    printf("%d\n", count);
    count = count + 1;

} while (count < 5);
}// to run =>  gcc Do.c -o Do && Do.exe
