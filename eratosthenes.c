#include <stdio.h>
#include <math.h>

int int_list[4096], prime_list[4096];

void prime_finder(int n);

void main (void){
    int n = 2;
    scanf("%d", &n);

    for (int i = 2; i<=n; i++){
        int_list[i]=i;
        prime_list[i]= 1;
    }

    prime_finder(n);

    for (int i = 2; i <= n; i++){
        if (prime_list[i] == 1){
            printf("%d ", i);
        }
    }
}

void prime_finder( int n){
    int stopper;
    stopper = sqrt(n);

    for (int i = 2; i <= stopper ; i++){
        if (prime_list[i] == 1){
            int i_sq, j;
            i_sq = pow(i, 2);
            for ( j = i_sq; j<= n; j+= i ){
                prime_list[j] = 0;
            }
        }
    }
}

