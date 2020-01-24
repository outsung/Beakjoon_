#include <stdio.h>

int main(){

    int input_A = 0;
    int input_B = 0;

    scanf("%d %d", &input_A, &input_B);

    if(input_A < input_B)
        printf("%c", '<');
    else if(input_A == input_B)
        printf("%s", "==");
    else
        printf("%c", '>');


    return 0;
}
