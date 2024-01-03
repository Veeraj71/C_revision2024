#include<stdio.h>

int main () {
    float radius; 
    float height;
    float pi = 3.14;
    
    printf("What is the radius of the cylinder\n");
    scanf("%f", &radius);

    printf("What is the height of the cylinder\n");
    scanf("%f", &height);

    printf("The volume of the cylinder is %f", pi*radius*radius*height); 
    return 0;
}