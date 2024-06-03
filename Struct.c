/*
In C, a struct (short for "structure") is a user-defined data type that allows you to group multiple variables of different data types together into a single unit. 
This unit is called a struct instance or a struct object.*/

struct Person
{
    int age;
    double salary;
};
typedef struct Car{
    int year;
} car;
typedef struct Complex{
    double real;
    double imagine;
} complex;

int main(){
    struct Person person1;
    person1.age = 25;
    person1.salary = 4352.1;
    //  struct Person person1 = {.age = 25, .salary =  4352.1}

    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2f\n", person1.salary);

    struct Person person2;
    person2.age = 35;
    person2.salary = 6352.1;
    //  struct Person person1 = {.age = 35, .salary = 6352.1}

    printf("Age of person1: %d\n", person2.age);
    printf("Salary of person1: %.2f\n", person2.salary);

    //typedef in struct
    struct Car car1;
    car1.year = 1994;
    complex c1 = {.real = 21.87, .imagine = 30};
    complex c2 = {.real = 34.56, .imagine = 45.6};

    complex sum;
    sum.real = c1.real + c2.real;
    sum.imagine = c1.imagine + c2.imagine;

    printf("Result is %.2lf + %.2lf",sum.real, sum.imagine);
    return 0;

} // to run =>  gcc Struct.c -o Struct && Struct.exe
