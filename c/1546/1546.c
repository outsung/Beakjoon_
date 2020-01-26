#include <stdio.h>


int main(){

    int t = 0;

    double input_list[1005] = { 0 };

    double max = -1;

    double sum = 0;

    double res = 0;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%lf", &input_list[i]);
        if(max < input_list[i]){
            max = input_list[i];
        }
    }

    for(int i = 0; i < t; i++){
        input_list[i] =  input_list[i] / max * 100.0;
        sum += input_list[i];
    }

    res = sum / t;


    printf("%lf", res);

    return 0;
}