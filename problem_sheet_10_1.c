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
    int tmp_num, tmp_den = 1, tmp_;

    tmp_num = numerator;
    tmp_den = denominator;

    while (reminder != 0){
        reminder = tmp_num % tmp_den;
        tmp_ = tmp_num;
        tmp_num = tmp_den;
        tmp_den = tmp_ - tmp_den;
    }

    numerator %= tmp_den;
    denominator %= tmp_den;
}