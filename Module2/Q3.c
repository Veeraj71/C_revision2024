#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num % 97);

    // If the remainder (output) is zero then it is divisible by 97 and vice versa.
    
    return 0;
}