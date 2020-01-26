#include <stdio.h>
#include <string.h>

int main(){

    unsigned int input_A = 0;
    unsigned int input_B = 0;
    unsigned int input_C = 0;

    unsigned int res = 0;

    char res_str[10] = { 0 };

    int num = 0;

    scanf("%d", &input_A);
    scanf("%d", &input_B);
    scanf("%d", &input_C);

    res = input_A * input_B * input_C;
    
    sprintf(res_str, "%d", res);

    for(int i = 0; i <= 9; i++){
        num = 0;
        for(int j = 0; j < strlen(res_str); j++){
            //printf("%d\n",(int)res_str[j] - 48);
            num += (int)res_str[j] - 48 == i ? 1 : 0;
        }
        printf("%d\n", num);
    }

    return 0;
}