#include <stdio.h>

int main(){

    int input_n = 0;
    int res = 0;

    scanf("%d", &input_n);
    for (int i = 1; i <= input_n; i++){
        res += i;
    }
    
    printf("%d", res);
    
    return 0;
}
