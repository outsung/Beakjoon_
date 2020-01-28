#include <stdio.h>
#include <string.h>


int han(int x){
    char x_str[4] = { 0 };

    int res[4] = { -1,-1,-1,-1 };

    int len = 0;

    sprintf(x_str, "%d", x);

    for(int i = 0; i < 5; i++){
        if(x_str[i] == 0){
            len = i;
            break;
        }
        res[i] += (int)x_str[i] - 48;
    }

    if(len == 1){
        return 1;
    }
    int unit = res[0] - res[1];

    for(int i = 0; i < 4; i++){
        if(len == i + 1)
            break;
        if(unit != res[i] - res[i + 1]){
            return 0;
        }
        unit = res[i] - res[i + 1];
    }

    return 1;
}

int d(int n){ 
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += han(i) ? 1 : 0;
    }      
    return res;
}


int main(){

    int input_N = 0;

    scanf("%d", &input_N);

    printf("%d\n", d(input_N) );

    return 0;
}

