#include <stdio.h>

int main(void){

    int a1 = 10;
    int *a2 = &a1; 

    int b1 = 27;
    int *b2 = &b1; 

    printf("valor: %d, endereço: %p\n", a1, a2);
    printf("valor = %d, endereço: %p\n\n", b1, b2);

    //alteração de valores

    *a2 = 20; 
    *b2 = 100; 

    printf("valor = %d,endereço = %p\n", a1, a2); 
    printf("valor = %d,endereço = %p\n\n", b1, b2);

}
