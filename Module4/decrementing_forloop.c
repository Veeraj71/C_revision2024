/*This Decrementing loop will keep on 
running until 'a' becomes 0*/

//The loop runs in following steps :
/*  1. i is initialized to 5
    2. The condition "i" (0 or non0) is tested
    3. The code is executed
    4. i is decremented 
    5. Condition i is checked and code is executed if its not 0
    6. And so on until i is non 0 */

#include<stdio.h>

int main () {
    for (int a=5; a; a--) {
        printf("The value of a is %d \n", a);
    }
}