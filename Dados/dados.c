#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.65;
    double saldoBancario = 1500.00;
    char inicial = 'C';
    char nome[20] = "Caio";
 
    printf("A idade do %s é: %d\n", nome, idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;

    /*
    printf(“%formato1 %formato2”, variável1, variável2);

    %d: Imprime um inteiro no formato decimal. 
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    
    */
}