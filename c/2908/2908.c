#include <stdio.h>
#include <math.h>

int main(){

    char input_A[4] = { 0 };
    char input_B[4] = { 0 };

    int sangsu_A = 0;
    int sangsu_B = 0;

    scanf(" %s", input_A);
    scanf(" %s", input_B);


    // 4 3 7
    for(int i = 0; i < 3; i++){
        sangsu_A += (input_A[i] - 48) * pow(10, i);
    }
    for(int i = 0; i < 3; i++){
        sangsu_B += (input_B[i] - 48) * pow(10, i);
    }

    sangsu_A > sangsu_B ? printf("%d", sangsu_A) : printf("%d", sangsu_B);

    return 0;
}

