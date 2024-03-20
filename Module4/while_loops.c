/*While loop checks the condition 
then executes the code*/

#include<stdio.h>

int main () {
    int a=2;
    scanf("%d", &a);
    while(a<10) {
        printf("%d\n", a);
        a++; 
    }

    return 0;
}