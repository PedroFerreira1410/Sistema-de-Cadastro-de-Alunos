# Sistema de Cadastro de Alunos

Projeto em linguagem C que permite cadastrar alunos, armazenar seus dados em memória e listar as informações cadastradas, incluindo o cálculo da média final do aluno.

## Funcionalidades
- Ler o nome do aluno
- Ler o número da matrícula
- Ler duas notas 
- Exibir todas as informações cadastradas
- Calcular e exibir a média final do aluno

## Tecnologias 
- Linguagem C
- Structs
- Vetores
- Estruturas de decisão e repetição
- Entrada e saída padrão (`stdio`)

## Como compilar e executar
### Compilação
```bash
gcc main.c -o alunos
```
### Execução
```bash
./alunos
```
## Estrutura do projeto
```md
├── README.md
├── alunos.exe
└── main.c
```

## Observações técnicas
- O nome do aluno é lido com `fgets` para permitir espaços
- O caractere `\n` inserido pelo `fgets` é removido usando `strcspn` 
- O limite máximo de alunos é definido por uma constante (`#define`)

## Autor
Pedro Henrique Alvarenga Ferreira
