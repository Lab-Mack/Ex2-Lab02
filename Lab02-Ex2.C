#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m e igual a %.2f.\n", peso, altura, imc);

    return 0;
}
