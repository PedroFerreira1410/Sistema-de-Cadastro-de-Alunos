/*
    Sistema de Cadastro de Alunos
    Autor: Pedro Henrique Alvarenga Ferreira
    Data: 03/01/2026

    Descrição:
    Programa que permite realizar o cadastro de alunos.
    Os dados de cada aluno podem ser listados posteriormente.

    Funcionalidades:
    -Ler o nome do aluno
    -Ler o número de sua matrícula
    -Ler duas notas 
    -Exibir todas as informações cadastradas
    -Calcular e exibir a média final do aluno

*/
#include <stdio.h>
#include <string.h>

#define opcao_sair 0
#define opcao_cadastrar 1
#define opcao_listar 2
#define max_alunos 5

struct aluno
{
    char nome[100];
    int matricula;
    float nota1;
    float nota2;
};

int main()
{
    struct aluno alunos[max_alunos];
    int total_alunos = 0;
    int opcao;
    do
    {
        printf("=== REGISTRO DE ALUNOS ===\n");
        printf("%d - Cadastrar aluno\n", opcao_cadastrar);
        printf("%d - Listar alunos\n", opcao_listar);
        printf("%d - Sair\n", opcao_sair);

        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case opcao_cadastrar:
            if (total_alunos < max_alunos)
            {
                printf("Informe o nome do aluno: ");
                getchar();
                fgets(alunos[total_alunos].nome, 100, stdin);
                alunos[total_alunos].nome[strcspn(alunos[total_alunos].nome, "\n")] = '\0'; //localiza o "\n" deixado pelo fgets e troca por '\0' para limpar a string

                printf("Número de matrícula do(a) %s: ", alunos[total_alunos].nome);
                scanf("%d", &alunos[total_alunos].matricula);

                printf("Primeira nota do(a) %s: ", alunos[total_alunos].nome);
                scanf("%f", &alunos[total_alunos].nota1);

                printf("Segunda nota do(a) %s: ", alunos[total_alunos].nome);
                scanf("%f", &alunos[total_alunos].nota2);

                total_alunos = total_alunos + 1;
            }
            else
            {
                printf("Limite de registro atingido.\n");
            }
            break;
        
        case opcao_listar:
            if (total_alunos == 0)
            {
                printf("Nenhum aluno foi cadastrado.\n");
            }
            else
            {
                int i;
                for (i = 0; i < total_alunos; i++)
                {
                    printf("Aluno %d\n", i + 1);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("Matrícula %d\n", alunos[i].matricula);
                    printf("Nota 1: %.2f\n", alunos[i].nota1);
                    printf("Nota 2: %.2f\n", alunos[i].nota2);
                    printf("Média do aluno: %.2f\n\n", (alunos[i].nota1 + alunos[i].nota2) / 2);
                }
            }
            break;

        case opcao_sair:
            printf("Saindo...\n");
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != opcao_sair);
    
    return 0;
}