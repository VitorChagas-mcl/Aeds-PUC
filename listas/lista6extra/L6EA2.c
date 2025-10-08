//2. Escreva um programa em C para demonstrar o uso do operador & (endereço de) e (valor no endereço)

#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr;         

    ptr = &num;

    printf("Valor de num: %d\n", num);
    printf("Endereco de num (&num): %p\n", &num);
    printf("Valor de ptr (endereco guardado): %p\n", ptr);
    printf("Valor apontado por ptr (*ptr): %d\n", *ptr);

    // alterando o valor de num através do ponteiro
    *ptr = 20;
    printf("\nDepois de alterar *ptr = 20:\n");
    printf("Valor de num: %d\n", num);
    printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}
