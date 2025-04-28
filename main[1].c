#include <stdio.h>

int main() {
    double n1, n2, resultado;
    char op, fim = 'N';

    while (fim != 'S' && fim != 's') {
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);

        printf("Digite o operador (+, -, *, /): ");
        scanf(" %c", &op);  

        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        switch(op) {
            case '+':
                resultado = n1 + n2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case '-':
                resultado = n1 - n2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case '*':
                resultado = n1 * n2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case '/':
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            default:
                printf("Operador invalido!\n");
        }

        printf("Deseja sair? (S/N): ");
        scanf(" %c", &fim);  // lê resposta
    }

    printf("Calculadora encerrada.\n");
    return 0;
}