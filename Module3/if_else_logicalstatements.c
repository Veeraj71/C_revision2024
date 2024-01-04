#include<stdio.h>

int main() {
    
    int age; 
    printf("Enter your age"); 
    scanf("%d", &age);

    if (age >=18 && age <=70) {
        printf("You can drive legally");
    }
    else {
        printf("You cannot drive legally");
    }
    return 0;
}