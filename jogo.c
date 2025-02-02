#include <stdio.h>

int main() {

    long long int inteiro;
    double A, B;
    double C;
    char tipo;

    scanf("%lf %lf %lf", &A, &B, &C);    
    
    scanf(" %c", &tipo);

    switch (tipo) {
        case 'A':
            A += (3*(B/2));
            A += (5*(C/2));
            inteiro = (long long int) A;
            printf("%lld\n", inteiro);
        break;

        case 'B':
            A += (5*(C/2));
            B += (2*(A/3));
            inteiro = (long long int) B;
            printf("%lld\n", inteiro);
        break;

        case 'C':
            A += (3*(B/2));   
            C += (2*(A/5));
            inteiro = (long long int) C;
            printf("%lld\n", inteiro);
        break;
    }

    return 0;
}