#include <stdio.h>
#include <math.h>

long int main (int n){
    n=5;
    long int sum_cubic = 0;
    for (int i = 1; i <= n; i++){
        sum_cubic += pow(i, 3);
    }
    printf("%d", sum_cubic);
    return sum_cubic;
}