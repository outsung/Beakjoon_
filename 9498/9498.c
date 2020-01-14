#include <stdio.h>

int main(){

    int input_A = 0;

    scanf("%d", &input_A);

    if(input_A >= 90)
        printf("A");
    else if(input_A >= 80)
        printf("B");
    else if(input_A >= 70)
        printf("C");
    else if(input_A >= 60)
        printf("D");
    else
        printf("F");



    return 0;
}
