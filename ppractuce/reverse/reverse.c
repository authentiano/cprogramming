#include <stdio.h>
int main(){

    // capturing the user's input

    char name[100];
    printf("Enter your name please: ");
    scanf("%s", &name);
    int size_of_name = sizeof(name);

    printf("the sizeof name is:  %d", size_of_name);


    if(sizeof(name) < 2){
        printf("Not enough characters!");
    }
    else{
        printf("You entered adquate characters in your name");
    }


    return 0;
}