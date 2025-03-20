#include <stdio.h>
#include <stdlib.h>


int main(void){

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int *p = a;
    int *pBase = a;
    int i;

    // printf("&a[0] = %p / a[0] = %d\n", p, *p);

    //Operação de INCREMENTO (1º forma)
    for(i = 0; i < 10; i++){

        p = pBase + i; 
        printf("&a[%d] = %p / a[%d] = %d\nn", i, p, i, *p);
    }

}
