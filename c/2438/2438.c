#include <stdio.h>

int main(){

    int input_n = 0;


    scanf("%d", &input_n);
    for (int i = 0; i < input_n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
