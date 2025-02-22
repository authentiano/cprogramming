#include <stdio.h>
int main(){

    //one if statement and one else
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is a negative number\n"); 
    }
    return 0;
}