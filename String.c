#include <stdio.h>
#include <string.h>

int main(){

    char language[] = "C programming";
    printf("%s", language); // C programming

    printf("\nLength : %zu", strlen(language)); // Length : 13

    //strcpy()
    char food[] = "Pizza";
    char favoriteFood[20];
    strcpy(favoriteFood, food);
    printf("\nFavorite Food : %s", favoriteFood); // Favorite Food : Pizza

    //strcat()
    char hello[] = "Hello";
    char world[] = " World";
    char greeting[20];
    strcpy(greeting, hello);
    strcat(greeting, world);
    printf("\nGreeting : %s", greeting); // Greeting : Hello World

    char text_1[] = "Hello";
    char text_2[] = "How are you";
    strcat(text_1, text_2);
    printf("\nText 1 : %s", text_1); // Text 1 : HelloHow are you

    //strcmp()
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "abdf";

    int result = strcmp(str1, str2);
    int result1 = strcmp(str1, str3);

    printf("\n%d", result);//0
    printf("\n%d", result1); // -1

} // to run =>  gcc String.c -o String && String.exe
