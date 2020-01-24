#include <stdio.h>

int main(){

    int input_a = 0;
    int input_b = 0;

    while(1){
        scanf("%d", &input_a);
        scanf("%d", &input_b);
        if(input_a == 0 && input_a == 0)
            break;
        printf("%d\n", input_a + input_b);
    }
    
    return 0;
}
