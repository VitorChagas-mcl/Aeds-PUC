/*
4. Faça um programa que calcule o n-ésimo elemento de uma progressão geométrica (PG) e o
imprima na tela. O usuário deve entrar com os valores da razão e do 1o termo da PG. Lembre-se
que uma PG é dada pela seguinte fórmula: an = a1 ∗ qn−1, onde an é o n-ésimo elemento da PG,
a1 é o 1o elemento da PG e q é a razão.
• Mostre o algoritmo pedido.
• Mostre o algoritmo pedido sem utilizar a operação de exponenciação.
• Mostre o algoritmo pedido sem utilizar as operações de exponenciação e multiplicação.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a1, r, n;
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razao: ");
    scanf("%d", &r);
    printf("Digite o n-esimo termo:");
    scanf("%d", &n);
    int an = a1;
    while(n > 0){
        an *= r;
        n--;
    }
    printf("O algarismo pedido eh: %d \n", an);
    
}