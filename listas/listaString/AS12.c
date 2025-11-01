/*12. Crie um programa em C que leia uma cadeia de caracteres no formato “DD/MM/AAAA” e extraia
o dia, o mês e o ano para três variáveis inteiras. Antes disso, verifique se as barras estão nas
posições corretas e se os valores de DD, MM e AAAA são numéricos.*/

#include <stdio.h>

int main(){
    char data[11];
    int dia, mes, ano;
    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%[^\n]", data);
    getchar();
    if(data[2] != '/' || data[5] != '/'){
        printf("Formato de data invalido!\n");
        return 1;
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
    if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0){
        printf("Data invalida!\n");
        return 2;
    }
    printf("Dia: %d, Mes: %d, Ano: %d\n", dia, mes, ano);
}