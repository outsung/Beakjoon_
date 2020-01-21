#include <stdio.h>

int main(){

    int input_a = 0;
    int input_b = 0;

    while(1){
        if(scanf("%d %d", &input_a, &input_b) == EOF)
            break;
        printf("%d\n", input_a + input_b);
    }
    
    return 0;
}
