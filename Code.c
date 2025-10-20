#include <stdio.h>
#include <maths.h>

int main(void){
    int a;
    int b;
    int c;
    float X;
    float X1;
    float X2;
    
    printf("Entrez la valeure de a , b  et c :");
    scanf("%d %d %d ", &a, &b, &c);
    int delta = b * b - 4 * a * c;
    if(delta = 0)
    {
        printf("Une seule solution X: ");
        X = -b / (2 * a);
        printf("%f" , X);
    }
    else if(delta > 0)
    {
        printf("Deux racines X1 et X2: ");
        X1 = (- b - sqrt(delta)) / (2 * a);
        printf("%f", X1);
        X2 = (-b - sqrt(delta)) / (2 * a);
        printf("%f", X2);
    }
    else
    {
        printf("Pas de solution");
    }

    return 0;
}