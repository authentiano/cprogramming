#include <stdio.h>
#include <conio.h>
int main(){   
    float radius, area;
    printf("Enter the raduis of the circle =>  " );
    scanf("%f",&radius);
    area = 22.0/7*radius*radius;

    // printing the area of the circle
    printf("The area of a circle with radius %.2f has an area of %.2f", radius, area);

    getch();

    return 0;
}