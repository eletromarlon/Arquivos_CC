#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"
#define tam 5

int main(){
    int vetor[tam]; //O tamanho do vetor pode ser determinado pela constate "tam"
    int x, opc=1;

    while (opc != 0){

    printf("\n\n ----------------------- "); //Menu de opção para operação com a pilha;

    printf("\n 0 - Sair do programa");
    printf("\n 1 - Iniciar a Pilha ");
    printf("\n 2 - Estado da Pilha ");
    printf("\n 3 - Inserir um valor ");
    printf("\n 4 - Retirar um valor ");
    printf("\n 5 - Inverter a Pilha ");
    printf("\n 6 - Imprimir a Pilha ");
    printf("\n\n Escolha uma opcao: ");
    scanf("%d",&opc);

        switch (opc){

            case 0:{ //O "continue" dentro do case 0, serve para saída do While caso opc seja 0;
                continue;
            }

            case 1:{
                comeca(vetor, tam); //Aloca algum espaço de memória suficiente para as operações;
                break;
            }
            case 2:{ //Faz as verificações da PIlha, se VAZIA, COM ALGUM ELEMENTO OU CHEIA.
                if (vazio(vetor) == 1)
                    printf("\n\nPilha Vazia!");
                else if (cheio(vetor, tam) == 1)
                        printf("\n\nPilha Cheia!");
                        else
                            printf("\n\nPilha contém elementos!");
                break;
            }
            case 3:{
                printf("\n\nDigite um valor para inserir:");
                scanf("%d", &x);
                insere(vetor, x);
                break;
            }
            case 4:{
                printf("\n\nValor extraído do topo: %d", retira(vetor));
                break;
            }
            case 5:{
                inverte(vetor, tam);
                break;
            }
            case 6:{
                printf("\n\n");
                imprime(vetor);
                break;
            }
            default:{
                printf("\n\nAlgo inesperado aconteceu!");
            }
        }

    }
    return 0;
}
