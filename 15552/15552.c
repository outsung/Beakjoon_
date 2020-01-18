#include <stdio.h>

int main(){

    int t = 0;

    int input_A = 0;
    int input_B = 0;


    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d %d", &input_A, &input_B);
        printf("%d\n", input_A + input_B);
    }
    
    
    return 0;
}
