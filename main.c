#include <stdio.h>
#include <string.h>
#include "TadMochila.h"
//gcc -o teste main.c TadMochila.c TadMochila.h

int main() {

  clock_t tempo;
	tempo = clock();

  int N,peso,valor,i = 0,r,comp,opcao;
  Ttupla *Vetor;
  char leitorN[20];

  FILE* pArquivo;
    printf(" --------------------------------------------------------- \n");
    printf("|                       UFV - CAF                         |\n");
    printf("|                         TP 2                            |\n");
    printf("|            Vinicius Ribeiro       -  2670               |\n");
    printf("|            Roniel Nunes           -  3464               |\n");
    printf(" --------------------------------------------------------- \n");
  printf("Digite o nome do arquivo: ");
  scanf("%s",leitorN);
  strcat(leitorN,".txt");

  pArquivo = fopen(leitorN,"r");

  if((pArquivo = fopen(leitorN,"r")) == NULL){
    printf("Erro na abertura do arquivo.\n");
    return 1;
  }else{
    printf("Arquivo aberto com sucesso.\n");

    printf(" --------------------------------------------------------- \n");
    printf("|                       OPERACOES                         |\n");
    printf("|                                                         |\n");
    printf("|  1 - Imprimir Combinaçoes de 1 ate N                    |\n");
    printf("|  2 - Imprimir apenas a melhor combinacao final          |\n");
    printf(" --------------------------------------------------------- \n");
    printf("Entre com uma opcao: ");
    scanf("%d", &opcao);

      fscanf(pArquivo,"%s", leitorN);
    N = atoi(leitorN);
    Vetor = (Ttupla *)malloc(N * sizeof(Ttupla));

    while(fscanf(pArquivo,"%d %d",&peso,&valor) != EOF){
      Vetor[i].peso = peso;
      Vetor[i].valorImportancia = valor;
      i++;
    }
  }
  for(i = 0; i < N; i++){
    r = i+1;
    comp = N - (i+1);
    system("cls");
    printf("combinacoes %d%c completas\n",((100/N)*i+1),37 );
      printCombination(Vetor, N, r, comp,opcao);
  }


    printf("Tempo de execucao: %.3f Segundos\n",(clock() - tempo) / (double)CLOCKS_PER_SEC);

      return 0;
}
