#include<stdio.h>

int main () {
    int length;
    int breadth;
    
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);
    
    printf("What is the breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("The area of the rectanlge is %d", length*breadth);
    return 0;
}