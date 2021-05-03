#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

struct conjunto{
	int tam;
	int *elementos ;
};


Conjunto* criar(){

	Conjunto* novo;
	novo = (Conjunto *)malloc(sizeof(Conjunto));
	if(novo == NULL){
		printf("NÃO FOI POSSÍVEL ALOCAR CORRETAMENTE!\n");
		exit(1);
	}

	novo->tam = 0;
	novo->elementos = (int*)malloc(sizeof(int));

	return novo;
}

void atribuir(Conjunto* con,int n){

	int y,i,j;

	if(con == NULL){
		printf("NÃO VAI SER POSSÍVEL ATRIBUIR, POIS ESSE CONJUNTO NÃO EXISTE!\n");
	}
	con->tam = n;
	if(con->elementos == NULL){
		con->elementos = (int*)malloc(sizeof(int));
	}
	

	for(i=0;i< con->tam;i++){
		printf("Digite: ");
		scanf("%d",&y);
		con->elementos[i] = y;

		for(j=0;j<=i-1;j++){
			if(con->elementos[i] == con->elementos[j]){
				printf("Este valor ja esta no conjunto, informe outro por favor:\n");
				i= i-1;		
			}
		}

	}
	
}

Conjunto* uniao (Conjunto* con,Conjunto* con2){

	int i,j;

	Conjunto* c;

	if(con == NULL || con2 == NULL){
		printf("CONJUNTO INEXISTENTE!\n");
		exit(1);

	}

	int x=0,y=0;

	for(i=0;i<con->tam;i++){
		for(j=0;j<con2->tam;j++){
			if(con->elementos[i] == con2->elementos[j]){
				x++;
			}
		}
	}

	if(x==0){

		c = criar();

	
		for(i=0;i<con->tam;i++){

			c->elementos[i] = con->elementos[i];
		}

	
		for(i=con->tam;i<(con->tam+con2->tam);i++){
			c->elementos[i] = con2->elementos[y];
			y++;

		}

		printf("[ ");
		for(i=0;i<(con->tam+con2->tam);i++){
			printf("%d ",c->elementos[i]);

		}
		printf("]\n");


			
		
		return c;
	}

	else{
		c = criar();
		int k=con->tam;
		int cont=0;

		for(i=0;i<con->tam;i++){
			c->elementos[i] = con->elementos[i];

		}
		for(i=0;i<con2->tam;i++){
			y=0;
		for(j=0;j<con->tam;j++){
			if(con2->elementos[i]==con->elementos[j]){
				y++;
				cont++;
			}
		}
		if(y==0){
			c->elementos[k] = con2->elementos[i];
			k++;

		}

		}

		printf("[ ");
		for(i=0;i<(con->tam+con2->tam)-cont;i++){
			printf("%d ",c->elementos[i]);

		}
		printf("]\n");

		return c;
	}
}



void imprimir(Conjunto * c){
	int i;
	for(i=0;i<c->tam;i++){
		printf("%d ",c->elementos[i]);
	}
}

Conjunto* intersecao(Conjunto *con,Conjunto *con2){
	int i,j;

	Conjunto* c;

	int x=0;

	for(i=0;i<con->tam;i++){
		for(j=0;j<con2->tam;j++){
			if(con->elementos[i] == con2->elementos[j]){
				x++;
			}
		}
	}if(x==0){
		printf("Nao ha intersecao\n");	

		return c;
	}else{
		c = criar();
		int y=0;
		int cont=0;
		for(i=0;i<con->tam;i++){
			for(j=0;j<con2->tam;j++){
				if(con->elementos[i] == con2->elementos[j]){
					c->elementos[y] = con2->elementos[j];
					y++;
					cont++;
				}
			}
		}

		printf("[ ");
		for(i=0;i<cont;i++){
			printf("%d ",c->elementos[i]);

		}
		printf("]\n");
		return c;

	}
}

void diferenca(Conjunto *con,Conjunto *con2){
	int i,j,x=con->tam,y=con2->tam,cont=0;

	for(i=0;i<x;i++){	           
		for(j=0;j<y;j++){
			if(con->elementos[i] == con2->elementos[j]){
				cont++;
			}
		}
	
		if(cont == 0){
			printf("%d ",con->elementos[i]);
			
		}else{
			cont = 0;
		}

	}
}

int contido(Conjunto *con,Conjunto *con2){
	int i,j,x=con->tam,y=con2->tam,cont=0;

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(con->elementos[i] == con2->elementos[j]){
				cont++;
			}
		}
	}
	if(cont == x){
		return 0;
	}else{
		return 1;
	}
	}

