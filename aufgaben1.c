#include <stdio.h>

void main (void){
    int c1, c2, c5, c10, c20, c50, e1, e2, sum;
    scanf("%d %d %d %d %d %d %d %d", &c1 , &c2, &c5, &c10, &c20, &c50, &e1, &e2);
    printf("%d Euro %d Cent", sum%100, sum - sum%100);
}