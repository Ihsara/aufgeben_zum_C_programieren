#include <stdio.h>
#include <math.h>

int numerator, denominator =1;

void CommonDenominator(void);

void main(void){
    scanf("%d %d", &numerator, &denominator);
    CommonDenominator();
    printf("%4d %4d \n", numerator, denominator);
}

void CommonDenominator(void){
    int reminder = 1000;
    int tmp_num, tmp_den = 1, tmp_, divident = 1000, cmd;

    tmp_num = numerator;
    tmp_den = denominator;

    while (reminder != 0){
        divident = tmp_num/ tmp_den;
        reminder = tmp_num % tmp_den;
        printf("%d %d %d %d\n", tmp_num, tmp_den, divident, reminder);
        if ( reminder == 0){
            cmd = tmp_den;
            printf("CMD: %d\n", cmd);
            break;
        }
        tmp_num = tmp_den;
        tmp_den = reminder;
    }

    numerator   /=  cmd;
    denominator /= cmd;
}