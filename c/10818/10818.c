#include <stdio.h>

int main(){

    int n = 0;
    int input = 0;

    int max = -1000001;
    int min = 1000001;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &input);
        if(max < input)
            max = input;
        if(min > input)
            min = input;
    }
    
    printf("%d %d", min, max);

    return 0;
}
