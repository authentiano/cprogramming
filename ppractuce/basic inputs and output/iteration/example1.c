#include <stdio.h>
#include <conio.h>
int main(){
    // program that prints programming 10 times 

    char word[20] = "Programming";
    int i = 0;
    
    while(i < 10){

        printf("%s\n ", word);
        i +=1;
    }


    // using the do while loop

    int j = 0;
    char name[] = "This is another string";
    do {
        printf("%s\n", name);
        j++;

    }
    while(j < 4);

    // using the for loop

    for(int m = 0; m < 10; m++){
        printf("\n The game will continue till its done");
    }

    getch();
    return 0;
}