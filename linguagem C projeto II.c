#include <stdio.h>
#include <string.h>
    int main(int argc, char const *argv[])
{
char nome [40];
char endereco [50];
char telefone [12];
printf("Digite o nome:\n");
fgets(nome,40,stdin);
printf("Digite o endereco:\n");
fgets(endereco,50,stdin);
printf("Digite o telefone:\n");
fgets(telefone,12,stdin);
printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome,endereco,telefone);
returno 0
}



