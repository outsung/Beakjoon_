#include <stdio.h>

int main(){

    int input_n = 0;
    int input_x = 0;

    int input_a = 0;

    scanf("%d", &input_n);
    scanf("%d", &input_x);
    for(int i = 0; i < input_n; i++){
        scanf("%d", &input_a);
        if(input_a < input_x)
            printf("%d ", input_a);
    }
    
    
    return 0;
}
