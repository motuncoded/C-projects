


#include <stdio.h>
//scanf and printf;


int main(){
// printf
    int x = 5;
    printf("x: %d\n", x);
    printf("%d, %d, %d\n", x, x+1, x+2);



    char c = 'q';
    printf("c: %c\n", c);

    double y = 4.56;
    printf("y : %f\n", y);

    float z = 2.5;
    printf("z : %f\n", z);

    char str[] = "A string";
    printf("str: %s\n", str);

    // for width
    printf("|||%10d|||\n", 5);// |||         5|||
    //for flags
    printf("|||%-10d|||\n", 7); // |||7         |||
    //for precision
    printf("|||%10.2f|||\n", 3.14159); // |||      3.14|||

//scanf
// for integar
int n = 0;
printf("Enter a number:");
scanf("%d", &n);
printf("n: %d\n", n);
// for character
char ch;
printf("Enter a character: ");
scanf(" %c", &ch);
printf("ch: %c\n", ch);
// for string
char str1[20];
printf("Enter a string: ");
scanf("%s", &str1);
printf("str1: %s\n", str1);
// for float
float f;
printf("Enter a float number: ");
scanf("%f", &f);
printf("f: %f\n", f);
// for double
double d;
printf("Enter a double number: ");
scanf("%lf", &d);
printf("d: %f\n", d); // %f for double is also correct

//Other examples

int n1, n2, n3;
printf("Enter n1: ");
scanf("%d", &n1);
printf("\nEnter n2: ");
scanf("%d",  &n2);
printf("\nEnter n3: ");
scanf("%d",&n3);
int sum = n1 + n2 + n3;
printf("Sum: %d", sum);

char buffer[50];
printf("Enter a charcter");
scanf(" %s", &buffer);
printf("Character entered: %s\n", buffer);

return 0;

} // to run =>  gcc print.c -o print && print.exe
