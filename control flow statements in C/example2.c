#include <stdio.h>
int main(){

    //this contains the else if statement
    int age;

    printf("Enter your age please: ");
    scanf("%d", &age);

    if (age > 18){
        printf("You are an adult \n");
    }
    else if(age < 18){
        printf("You are a young man or woman \n");
    }
    else{
        printf("You are a tenager \n");
    }
    return 0;
}