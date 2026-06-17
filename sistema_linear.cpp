#include <stdio.h>

int main() {

    int ordem;
    int continuar = 1;

    while (continuar == 1) {

        printf(" RESOLVEDOR DE SISTEMAS LINEARES\n");

        // VALIDAÇÃO DA ORDEM
        do {
            printf("Digite a ordem do sistema (2 ou 3): ");

            if (scanf("%d", &ordem) != 1) {
                printf("Erro: Digite apenas numeros!\n");

                while (getchar() != '\n');

                ordem = 0;
            }

        } while (ordem != 2 && ordem != 3);

        // SISTEMA 2x2
        if (ordem == 2) {

            float a1, b1, c1;
            float a2, b2, c2;
            float det, detX, detY;
            float x, y;

            printf("\nSistema no formato:\n");
            printf("a1x + b1y = c1\n");
            printf("a2x + b2y = c2\n\n");

            // VALIDAÇÃO DOS DADOS
            printf("Digite a1: ");
            while (scanf("%f", &a1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite b1: ");
            while (scanf("%f", &b1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite c1: ");
            while (scanf("%f", &c1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite a2: ");
            while (scanf("%f", &a2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite b2: ");
            while (scanf("%f", &b2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite c2: ");
            while (scanf("%f", &c2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            // REGRA DE CRAMER
            det = (a1 * b2) - (a2 * b1);

            if (det == 0) {

                printf("\nSistema sem solução única!\n");

            } else {

                detX = (c1 * b2) - (c2 * b1);
                detY = (a1 * c2) - (a2 * c1);

                x = detX / det;
                y = detY / det;

                printf("\nRESULTADO FINAL\n");
                printf("x = %.2f\n", x);
                printf("y = %.2f\n", y);
            }
        }

        // SISTEMA 3x3
        else if (ordem == 3) {

            float a1, b1, c1, d1;
            float a2, b2, c2, d2;
            float a3, b3, c3, d3;

            float det;
            float detX, detY, detZ;
            float x, y, z;

            printf("\nSistema no formato:\n");
            printf("a1x + b1y + c1z = d1\n");
            printf("a2x + b2y + c2z = d2\n");
            printf("a3x + b3y + c3z = d3\n\n");

            // VALIDAÇÃO DOS DADOS
            printf("Digite a1: ");
            while (scanf("%f", &a1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite b1: ");
            while (scanf("%f", &b1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite c1: ");
            while (scanf("%f", &c1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite d1: ");
            while (scanf("%f", &d1) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite a2: ");
            while (scanf("%f", &a2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite b2: ");
            while (scanf("%f", &b2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite c2: ");
            while (scanf("%f", &c2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite d2: ");
            while (scanf("%f", &d2) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite a3: ");
            while (scanf("%f", &a3) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite b3: ");
            while (scanf("%f", &b3) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite c3: ");
            while (scanf("%f", &c3) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            printf("Digite d3: ");
            while (scanf("%f", &d3) != 1) {
                printf("Erro: Digite apenas numeros: ");
                while (getchar() != '\n');
            }

            // DETERMINANTE PRINCIPAL
            det =
                a1 * (b2 * c3 - b3 * c2) -
                b1 * (a2 * c3 - a3 * c2) +
                c1 * (a2 * b3 - a3 * b2);

            if (det == 0) {

                printf("\nSistema sem solução única!\n");

            } else {

                // DETERMINANTE X
                detX =
                    d1 * (b2 * c3 - b3 * c2) -
                    b1 * (d2 * c3 - d3 * c2) +
                    c1 * (d2 * b3 - d3 * b2);

                // DETERMINANTE Y
                detY =
                    a1 * (d2 * c3 - d3 * c2) -
                    d1 * (a2 * c3 - a3 * c2) +
                    c1 * (a2 * d3 - a3 * d2);

                // DETERMINANTE Z
                detZ =
                    a1 * (b2 * d3 - b3 * d2) -
                    b1 * (a2 * d3 - a3 * d2) +
                    d1 * (a2 * b3 - a3 * b2);

                x = detX / det;
                y = detY / det;
                z = detZ / det;

                printf("\nRESULTADOn");
                printf("x = %.2f\n", x);
                printf("y = %.2f\n", y);
                printf("z = %.2f\n", z);
            }
        }

        // CONTINUAR
        do {

            printf("\nDeseja resolver outro sistema?\n");
            printf("1 - Sim\n");
            printf("0 - Nao\n");
            printf("Digite: ");

            if (scanf("%d", &continuar) != 1) {

                printf("Erro: Digite apenas 0 ou 1!\n");

                while (getchar() != '\n');

                continuar = -1;
            }

        } while (continuar != 0 && continuar != 1);

        printf("\n");
    }

    printf("Programa encerrado!\n");

    return 0;
}
