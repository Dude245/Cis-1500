#include <stdio.h>
int main(void) {
    double len, alpha, tempS, tempE, CLen;
    scanf("%lf",&len);
    scanf("%lf",&alpha);
    scanf("%lf",&tempS);
    scanf("%lf",&tempE);
    
    CLen=len* (alpha* 1.06e-6)*(tempE-tempS);
    printf("The value is %.2lf cm", CLen*100);
    return 0;
}