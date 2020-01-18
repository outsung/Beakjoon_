#include <stdio.h>

int main(){

    int input_H = 0;
    int input_M = 0;

    scanf("%d %d", &input_H, &input_M);


    // m - 45;
    input_M = input_M - 45;

    if(input_M < 0){
        input_M = 60 + input_M;
        input_H--;
    }
    if(input_H < 0){
        input_H = 24 + input_H;
    }

    printf("%d %d", input_H, input_M);


    return 0;
}
