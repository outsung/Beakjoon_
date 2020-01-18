#include <stdio.h>

int main(){

    int input_A = 0;
    
    scanf("%d", &input_A);
    
    for(int i = 1; i < 10; i++){
        printf("%d * %d = %d\n", input_A, i, input_A * i);
    }


    return 0;
}
