#include <stdio.h>


long long int getParents(long long int children, int K){
    return (children + K - 2) / K;
}

int main(){

    long long int input_N = 0;
    
    int input_K = 0;
    int input_T = 0;

    long long int input_A = 0;
    long long int input_B = 0;

    scanf("%lld %d %d", &input_N, &input_K, &input_T);
    
    for(int i = 0; i < input_T; i++){
        scanf("%lld %lld", &input_A, &input_B);
        long long int res = 0;

        if(input_K == 1){
            res = input_A > input_B ? input_A - input_B : input_B - input_A;
        }
        else{
            while(input_A != input_B){
                if(input_A < input_B){
                    input_B = getParents(input_B, input_K);
                }
                else{
                    input_A = getParents(input_A, input_K);
                }
                res++;
            }
        }
        printf("%lld\n", res);
    }

    return 0;
}

