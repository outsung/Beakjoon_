#include <stdio.h>

int main(){

    int input_A = 0;
    int input_B = 0;
    int input_C = 0;

    scanf("%d %d %d", &input_A, &input_B, &input_C);

    printf("%d\n", (input_A + input_B) % input_C );
    printf("%d\n", (input_A % input_C + input_B % input_C) % input_C );
    printf("%d\n", (input_A * input_B) % input_C );
    printf("%d\n", (input_A % input_C * input_B % input_C) % input_C );

    return 0;
}
