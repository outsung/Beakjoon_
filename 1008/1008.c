#include <stdio.h>

int main(){

    int input_A = 0;
    int input_B = 0;

    double res = 0;

    scanf("%d %d", &input_A, &input_B);

    res = (double)input_A / (double)input_B;

    printf("%.9lf", res);

    return 0;
}
