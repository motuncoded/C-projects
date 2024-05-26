// Switching alphabet with number

#include <stdio.h>

int main(){
//  The numbers correspond with a letter from A-Z, which can be identified in the key at the top. Use the key to work your way through all the letters and words, converting each number to the corresponding letter.
    int number;
    int i;

   
    printf("Enter a number (1-26): ");
    scanf("%d", &number);
   
    if(number >= 1 && number <= 26) {
    for(i = 0; i < 26; i++) {
        printf("%c\n", 'A' + i);
    }
        printf("%c\n", 'A' + number - 1);
    } else {
        printf("Invalid number\n");
    }
    return 0;
}// to run =>  gcc Project_5.c -o Project_5 && Project_5.exe