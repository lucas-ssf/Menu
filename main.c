#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void) {
    char*nome_opcoes[] = {"opcao 0", "opcao 1", "opcao 2"};
    char*respostas[3];
    int tamanho_max = 10;
    for (int i = 0; i < 3; i++) respostas[i] = (char*)malloc(sizeof(char)*tamanho_max);

    int opcao_escolhida = menu_opcoes("Menu de opcoes", 3, nome_opcoes);
    printf("A opcao escolhida foi: %d\n\n", opcao_escolhida);

    int campos = menu_input("Menu de input", 3,nome_opcoes,respostas,tamanho_max);

    for(int i = 0; i<3; i++) printf("%d: %s", i, respostas[i]);
    printf("Qtd de campos vazios: %d", campos);
    return 0;
}
