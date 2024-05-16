int main(){

    //Condtional statement in C language

    
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are eligible");
    }else{
        printf("You are not eligible");
    }

    int score;
    printf("Enter your score:");
    scanf("%d", &score);
    if(score >= 80){
    printf("A+");
    }else if(score >=70 && score < 79 ){
        printf("A");
    }else if(score >= 60 && score < 69){
        printf("A-");
    }else if(score >= 50 && score < 59){
        printf("B");
     }else if(score >= 40 && score < 49){
        printf("C");
     }else if(score >= 30 && score < 39){
        printf("D");
     }else{
        printf("F");
     }


 //exercise
    int a = 5;
    if(!(a % 2 == 0)){
        printf("Inside if");
    } else{
        printf("Inside else");
    }

}// to run =>  gcc Condition.c -o Condition && Condition.exe