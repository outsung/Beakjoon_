#include <stdio.h>

int main(){

    int t = 0;

    int input_n = 0;
    int input_x[1001] = { 0 };

    double sum = 0;

    double res = 0;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &input_n);
        sum = 0;
        res = 0;
        for(int j = 0; j < input_n; j++){
            scanf("%d", &input_x[j]);
            sum += input_x[j];
        }
        sum /= input_n;

        for(int j = 0; j < input_n; j++){
            res += sum < input_x[j] ? 1 : 0;
        }
        res /= input_n;
        printf("%.3lf%%\n", res * 100);
    }


    return 0;
}