\\Aluno: Pedro Vitorino
#include <stdio.h>

#define MAX_ALUNOS 5

// Função para calcular média
float calcularMedia(float n1, float n2, float n3) {
return (n1 + n2 + n3) / 3.0;
}

int main() {
char nomes[MAX_ALUNOS][50];
float notas[MAX_ALUNOS][3];
float medias[MAX_ALUNOS];
int i, j, quantidade;

```
printf("Quantos alunos deseja cadastrar (max 5)? ");
scanf("%d", &quantidade);

if (quantidade > MAX_ALUNOS) {
    quantidade = MAX_ALUNOS;
}

// Entrada de dados
for (i = 0; i < quantidade; i++) {
    printf("\nAluno %d\n", i + 1);

    printf("Nome: ");
    scanf(" %[^\n]", nomes[i]);

    for (j = 0; j < 3; j++) {
        printf("Nota %d: ", j + 1);
        scanf("%f", &notas[i][j]);
    }

    medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);
}

// Exibição da tabela
printf("\n--- RESULTADOS ---\n");
printf("Nome\t\tNotas\t\t\tMedia\tSituacao\n");

for (i = 0; i < quantidade; i++) {
    printf("%s\t", nomes[i]);

    for (j = 0; j < 3; j++) {
        printf("%.1f ", notas[i][j]);
    }

    printf("\t%.2f\t", medias[i]);

    if (medias[i] >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

// Encontrar maior média
int indiceMaior = 0;
for (i = 1; i < quantidade; i++) {
    if (medias[i] > medias[indiceMaior]) {
        indiceMaior = i;
    }
}

printf("\nAluno com maior media: %s (%.2f)\n", nomes[indiceMaior], medias[indiceMaior]);

return 0;
```

}
