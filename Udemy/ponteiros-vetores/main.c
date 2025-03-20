#include <stdio.h> 
#include <stdlib.h>

#define MAX_ELEMENTS 20

int main(void){

    int i;
    int vetor[MAX_ELEMENTS]; 
    
    int *pv = NULL; // NULL -> Endereço que não pode ser acessado.

    int x;

    for(i = 0; i< MAX_ELEMENTS; i++){
        vetor[i] = i;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    pv = &vetor[0]; // endereço de memória da posição 0 do vetor.
    printf("pv -> %p\n", pv); 

    pv = &vetor[3]; //endereço de memória da posição 2 do vetor.
    printf("pv -> %p\n", pv);

    pv = vetor; //endereço de memória do vetor, automaticamente será o endereço da primeira posição.
    //o nome do vetor é um sinônimo da localização do primeiro elemento em memória desse vetor.
    printf("pv -> %p\n", pv);

    x = *pv; // exibindo o valor de pv em armazenando em x
    printf("x -> %d\n", x);

    x = *(pv + 1); // exibindo o valor de pv e adicionando 1 em x
    printf("x -> %d\n", x);

    x = *(pv + 2); 
    printf("x -> %d\n", x);

}
