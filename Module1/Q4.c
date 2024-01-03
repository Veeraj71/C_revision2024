#include<stdio.h>

int main() {
    float principal; 
    float rate;
    float timeduration;

    printf("What is the principal amount\n");
    scanf("%f", &principal);

    printf("What is the rate of interest\n");
    scanf("%f", &rate);

    printf("What is the time duration of the principal amount\n");
    scanf("%f", &timeduration);

    printf("The simple interest is %f", principal*rate*timeduration/100);

    return 0;
}