#include <stdio.h> 
#include <stdlib.h>
/*
Escreva um programa que:
1. Declare uma variável inteira 'numero' e inicialize-a com 10
2. Declare um ponteiro para inteiro chamado 'ptr'
3. Faça o ponteiro 'ptr' apontar para a variável 'numero'
4. Imprima:
- O valor da variável 'numero'
- O endereço da variável 'numero' usando o operador &
- O valor armazenado no ponteiro 'ptr'
- O valor apontado pelo ponteiro 'ptr' (usando desreferenciação)
*/

int main(void){

    int numero = 10;
    int *ptr = &numero;

    printf("valor da variavel numero: %d\n", numero);
    printf("endereço: %p\n", &numero);
    printf("valor armazenado em ptr = %p\n", ptr);
    printf("valor apontado em ptr: %d\n", *ptr);

}
