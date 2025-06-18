#include <stdio.h>
#include <stdlib.h>



void main(){
    
int ope;    
int va1, va2;
int resu;
char r = 'q';
float v1;
float v2;
float res;



while (r == 'q'|| r == 'Q'){


printf("escolha uma das quatro operações\n\n1.soma\n2.subtração\n3.multiplicação\n4.divisão\n");
scanf("%d", &ope);

if (ope == 1) {
    printf("digite um numero:\n");
    scanf("%d", &va1);
    printf("digte mais um numero:\n");
    scanf("%d", &va2);
    resu = va1 + va2;
    printf("resultado: %d\n", resu);
    
}else if (ope == 2) {
    printf("digite um numero:\n");
    scanf("%d", &va1);
    printf("digte mais um numero:\n");
    scanf("%d", &va2);
    resu = va1 - va2;
    printf("resultado: %d\n", resu);
    
}else if (ope == 3) {
    printf("digite um numero:\n");
    scanf("%d", &va1);
    printf("digte mais um numero:\n");
    scanf("%d", &va2);
    resu = va1 * va2;
    printf("resultado: %d\n", resu);
    
}else if (ope == 4) {
    printf("digite um numero:\n");
    scanf("%f", &v1);
    printf("digte mais um numero:\n");
    scanf("%f", &v2);
    res = v1 / v2;
    printf("resultado: %.2f\n", res);
    

}


printf ("se deseja realizar outras operações digite (Q):\n");
scanf (" %c", &r);

}

 
}












