#include<stdio.h>
#include<conio.h>

typedef struct nodo{
	int dato;
	struct nodo *siguiente;
       	struct nodo *anterior;
}nodo;

nodo *inicio= NULL;
nodo *ultimo=NULL;





void insertar(struct nodo *nodo){
	struct nodo *nuevo=NULL;
	nuevo= (struct nodo *) malloc(sizeof(struct nodo *));
	nuevo->dato=dato;

	if(inicio==NULL){
		inicio=nuevo;
		inicio->siguiente=NULL;
		inicio->ultimo=NULL;
		inicio=ultimo;
	}
	else {
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->atras= ultimo;
		ultimo=nuevo; 
	}
}

void mostrar(*nodo){
	struct nodo *lista= (struct nodo*)malloc(sizeof(struct nodo*));
	if(lista==NULL){
		while(lista !=NULL){
		printf("\n %d", actual->dato);
		lista= lista->siguiente;
		}
	}
	else {
		return -1;
	}
}

