#include<stdio.h>

int main() {
    int physics, chemistry, maths;
    float total;
    printf("Enter your Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter your Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter your Maths Marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths)/3;
    if ((total<40) || physics<33 || maths<33 || chemistry<33){
        printf("Your total percentage is %f and you are failed\n", total);

    }
    else {
        printf("Your total percentage is %f and you are passed\n", total);
    }
    return 0;
}