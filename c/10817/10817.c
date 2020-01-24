#include <stdio.h>

int main(){

    int input_A = 0;
    int input_B = 0;
    int input_C = 0;

    int *max = 0;

    scanf("%d %d %d", &input_A, &input_B, &input_C);

    if( input_A > input_B )
        if(input_A > input_C)
            // A is max
            max = input_B > input_C ? &input_B : &input_C;
        else
            // C is max
            max = input_A > input_B ? &input_A : &input_B;
    else 
        if(input_B > input_C)
            // B is max
            max = input_A > input_C ? &input_A : &input_C;
        else
            // C is max
            max = input_A > input_B ? &input_A : &input_B;
 

    printf("%d", *max);


    return 0;
}
