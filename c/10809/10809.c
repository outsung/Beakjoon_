#include <stdio.h>


int main(){

    int input_len = 0;
    char input_n = 0;

    int res = 0;

    scanf("%d", &input_len);

    scanf("%c", &input_n);
    for(int i = 0; i < input_len; i++){
        scanf("%c", &input_n);
        res += input_n - 48;
    }

    printf("%d", res);

    return 0;
}

