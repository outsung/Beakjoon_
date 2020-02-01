#include <stdio.h>

int main(){
    
    int t = 0;
    int loop = 0;

    char input_s[20] = { 0 };

    scanf("%d", &t);
    for(char i = 0; i < t; i++){
        scanf("%d %s", &loop, input_s);
        for(int j = 0; ; j++){
            if(input_s[j] == NULL)
                break;
            for(int l = 0; l < loop; l++){
                printf("%c", input_s[j]);
            }
        }
        printf("\n");
    }

    return 0;
}

