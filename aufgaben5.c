#include <stdio.h>
#include <math.h>

const float L = 5e-6;
const float C = 2e-9;
const float V = 10e-3;
const float base_M = 1e6;

int main (){
    float R[3] = {2.00, 20.00, 50.00};

    //scanf("Give me value of R: %f", R);

    printf("Value of R: %f\n", R);
    printf("Value of L: %f\n", L);
    printf("Value of C: %.10f\n", C);
    printf("Value of V: %f\n", V);

    for (int j = 0; j < 3; j++){
        float R_temp = R[j];
        printf("\nWith R = %f, Values of I are: \n", R_temp);
        for ( int i = 1; i <= 30 ; i ++ ){
            printf("Value of w: %.1e ", i*base_M);
            printf("--- Value of I: %.12lf\n", V/sqrt( pow ( R_temp, 2) + pow ( (i*base_M*L - 1/(i*base_M*C)), 2)));
        }
    }
}