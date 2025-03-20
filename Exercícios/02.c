#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que:
1. Declare duas variáveis inteiras 'a' e 'b' com valores 5 e 10 respectivamente
2. Declare um ponteiro para inteiro 'ptr'
3. Faça 'ptr' apontar para 'a'
4. Duplique o valor de 'a' usando apenas o ponteiro 'ptr'
5. Faça 'ptr' apontar para 'b'
6. Divida o valor de 'b' por 2 usando apenas o ponteiro 'ptr'
7. Imprima os novos valores de 'a' e 'b'
*/

int main(void){

    int a = 5, b = 10;
    int *ptr = &a;

    *ptr = *ptr+*ptr;

    ptr = &b;
    *ptr = *ptr/2; 

    printf("a = %d\n", a);
    printf("b = %d\n", b);

}
