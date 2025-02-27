#include<stdio.h>
#include<conio.h>
int main(){

    // printing number in a reversed order
    
    // using the for loop

    for(int i = 20; i >= 0; i--){
        printf("%d \n ", i);
    }

    // using the while loop

    int m = 20;
    do {
        printf("%d \n", m);
        m--;
    }

    while(m >= 1);

    getch();
    return 0;

}