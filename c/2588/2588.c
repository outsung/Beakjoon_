#include <stdio.h>

int main(){

    int input_A = 0;
    int input_B = 0;

    int input_B_1 = 0;
    int input_B_10 = 0;
    int input_B_100 = 0;


    scanf("%d %d", &input_A, &input_B);


    input_B_100 = (int)(input_B / 100.0);
    input_B_10 = (int)(input_B / 10.0) - input_B_100 * 10;
    input_B_1 = input_B - input_B_100 * 100 - input_B_10 * 10;

    printf("%d\n", input_A * input_B_1);
    printf("%d\n", input_A * input_B_10);
    printf("%d\n", input_A * input_B_100);
    printf("%d\n", input_A * input_B);

    return 0;
}
