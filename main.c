#include <stdio.h> 
#include <stdlib.h>
#include "tad.h"

void menu();

int main(){

	Conjunto *c,*c2;
	c = NULL;
	c2 = NULL;

	int n,op,e,a;
	

	do{
	menu();
	printf("Opção escolhida: ");
	scanf("%d",&op);
	printf("\n");
		switch(op){
			case 1:

			printf("Criar conjunto 1 ou 2? ");
			scanf("%d",&e);

			if(e == 1){
				if(c!= NULL){
					printf("############## CONJUNTO PREENCHIDO ##############\n");
					exit(1);

				}
				c = criar();
				printf("*************** CRIADO COM SUCESSO ! ***************\n");
			}
			if (e == 2){
				if(c2!= NULL){
					printf("############## CONJUNTO PREENCHIDO ##############\n");
					exit(1);

				}
				c2 = criar();
				printf("*************** CRIADO COM SUCESSO ! ***************\n");
			}
			break;

			case 2:
	
			printf("Inserir conjunto 1 ou 2?");
			scanf("%d",&e);
			

			if(e == 1){
				printf("Tamanho do conjunto: \n");
				scanf("%d",&n);

				atribuir(c,n);
				printf("Inserido com sucesso!\n");
				
			}
			if (e == 2){
				printf("Tamanho do conjunto: \n");
				scanf("%d",&n);

				atribuir(c2,n);
				printf("Inserido com sucesso!\n");
				
			}

			break;

			case 3:
			uniao(c,c2);
			break;
			case 4:
			intersecao(c,c2);
			
			break;
			case 5:
			diferenca(c,c2);
			diferenca(c2,c);
			break;

			case 6:
			printf("CONJUNTO 1:");
			if((contido(c,c2))==0){
				printf("CONTIDO ");
			}else{
				printf("NAO ESTA CONTIDO ");
			}
			printf("NO CONJUNTO 2\n\n\n");
//------------------------------------------
			printf("CONJUNTO 2:");
			if((contido(c2,c))==0){
				printf("CONTIDO ");
			}else{
				printf("NAO ESTA CONTIDO ");
			}
			printf("NO CONJUNTO 1\n");
			break;
			case 7:
			if((contido(c,c2))==0){
				printf("COMPLEMENTAR DE A EM B: [ ] (VAZIO)\n");

			}else{			
				printf("COMPLEMENTAR DE A EM B: ");
				diferenca(c,c2);
				
			}
//---------------------------------------------------------------
			if((contido(c2,c))==0){
				printf("COMPLEMENTAR DE B EM A: [ ] (VAZIO)\n");
			}else{
				printf("COMPLEMENTAR DE B EM A: ");
				diferenca(c2,c);
				
			}
			break;
				
			case 8:
			printf("Qual conjunto voce gostaria de imprimir (1 ou 2)?");
			scanf("%d",&a);

			if(a==1){
			printf("CONJUNTO 1: \n");
			printf("[ ");
			imprimir(c);
			printf(" ]\n");

			}
			
			if(a==2){
			printf("CONJUNTO 2: \n");
			printf("[ ");
			imprimir(c2);
			printf(" ]\n");


			}

			break;

			case 0:
			printf("VALAR MORGHULIS \n\n");
			break;

			default:
			printf("Opcao invalida\n");
			break;

		}

	}while(op != 0);

	





}

void menu(){
	printf("\n\n");
	printf("-----------------------------------------------------------\n");
	printf("|             LISTA #1 TIPO ABSTRATO DE DADO               |\n");
	printf("-----------------------------------------------------------\n");
	printf("                         (^-^)/ oi                         \n");
	printf("-----------------------------------------------------------\n");
	printf("|   1.Criar conjunto vazio                                 |\n");  
	printf("|   2.Preencher um conjunto inicialmente vazio             |\n");  
	printf("|   3.Uniao de dois conjuntos                              |\n"); 
	printf("|   4.Intersecao de dois conjuntos                         |\n");
	printf("|   5.diferenca entre dois conjuntos                       |\n");    
	printf("|   6.Verificar se um conjunto esta contido no outro       |\n");
	printf("|   7.Conjunto complementar                                |\n"); 
	printf("|   8.Imprimir os elementos de um conjunto                 |\n");
	printf("|                                                          |\n");
	printf("|   0.Sair                                                 |\n");  
	printf("|                                                          |\n");
	printf("-----------------------------------------------------------\n");

}