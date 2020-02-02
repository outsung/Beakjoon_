#include <stdio.h>

int main(){

    char input_c = 0;

    int res[26] = { 0 };

    int resMax = 0;
    int isQ = 0;

    for(int i = 0; i < 1000000; i++){
        if(EOF != scanf("%c", &input_c)){
            if(input_c > 90)
                input_c -= 32;
            res[input_c - 65]++; 
        }
        else{
            break;
        }
    }

    
    for(int i = 0; i < 26; i++){
        if(res[resMax] < res[i] || i == 0){
            resMax = i;
            isQ = 0;
        }
        else if(res[resMax] == res[i]){
            isQ = 1;
        }
    }

    isQ ? printf("?") : printf("%c", resMax + 65);

    return 0;
}

