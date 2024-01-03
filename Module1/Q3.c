#include<stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf("What is the given Celsius\n");
    scanf("%f", &celsius);

    printf("The conversion of the given celsius to fahrenheit is %f", (celsius*1.8)+32);
    return 0;
}