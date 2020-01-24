#include <stdio.h>

int main(){

    int input_A = 0;

    scanf("%d", &input_A);

    if((input_A % 4) == 0 && ((input_A % 100) != 0 || (input_A % 400) == 0))
        printf("1");
    else
        printf("0");




    return 0;
}
