#include <stdio.h>

// Recursion is when the unction calls itself

void recurse(){
    // ''' 
    // if(condition) {
    //     ....
    // }
    // else{
    //     recurse();

    // }
    // '''
}

int sum(int n);
int main(){
    // ''' 
    // recurse();
    // ''' 


    int result, number;
    printf("Enter a positive integar:");
    scanf("%d", &number);
    result = sum(number);

    printf("sum = %d", result);

    return 0;
    //this will cause a recurse function in infinity to avoid you craete a conditional statsment
}

int sum(int n){
    if(n!=0){
        //function sum called itself
        return n + sum(n - 1);
    }
    else{
        return n;
    }
}
// to run =>  gcc Recursion.c -o Recursion && Recursion.exe





