#include <stdio.h>

int main() {
    float N1, N2, PPD, EU = 0, N3 = 0, notaFinal;
    int flagEU, flagN3;

    printf("Digite a N1: ");
    scanf("%f", &N1);
    if (N1 < 0 || N1 > 4.5) {
        printf("ERRO 3: Nota invalida!\n");
        return 3;
    }

    printf("Digite a N2: ");
    scanf("%f", &N2);
    if (N2 < 0 || N2 > 4.5) {
        printf("ERRO 3: Nota invalida!\n");
        return 3;
    }

    printf("Digite a nota do PPD: ");
    scanf("%f", &PPD);
    if (PPD < 0 || PPD > 1) {
        printf("ERRO 3: Nota invalida!\n");
        return 3;
    }

    printf("Aluno realizou o Exame Unificado? (0 = nao, 1 = sim): ");
    scanf("%d", &flagEU);
    if (flagEU < 0 || flagEU > 1) {
        printf("ERRO 3: Resposta invalida!\n");
        return 3;
    }

    if (flagEU == 1) {
        printf("Digite a nota do Exame Unificado: ");
        scanf("%f", &EU);
        if (EU < 0 || EU > 1) {
            printf("ERRO 3: Nota invalida!\n");
            return 3;
        }
    }

    printf("Aluno realizou a N3? (0 = nao, 1 = sim): ");
    scanf("%d", &flagN3);
    if (flagN3 < 0 || flagN3 > 1) {
        printf("ERRO 3: Resposta invalida!\n");
        return 3;
    }

    if (flagN3 == 1) {
        printf("Digite a N3: ");
        scanf("%f", &N3);
        if (N3 < 0 || N3 > 4.5) {
            printf("ERRO 3: Nota invalida!\n");
            return 3;
        }
    }

    if (N1 < N2) {
        N1 = N3;
    } else {
        N2 = N3;
    }

    notaFinal = N1 + N2 + PPD + EU;

    if (notaFinal < 0) {
        notaFinal = 0;
    } else if (notaFinal > 10) {
        notaFinal = 10;
    }

    printf("Nota final: %.2f\n", notaFinal);
    if (notaFinal >= 6) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}