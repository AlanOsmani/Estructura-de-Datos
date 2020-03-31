#include<stdio.h>
#include<stdlib.h>

struct ListaD{
	struct ListaD *siguiente;
	struct ListaD *atras;
	int dato;
};

//-1 = NULL
struct ListaD * crear(int dato){
	struct ListaD *nuevo=NULL;
	nuevo=(struct ListaD *)malloc(sizeof(struct ListaD));
	if(nuevo==NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	nuevo->atras=NULL;
	return nuevo;
} 


struct ListaD * insertar(struct ListaD *lista, int dato){
	struct ListaD *nuevo= crear(dato);
	nuevo->siguiente=lista;
	lista->atras=nuevo;
	return nuevo;
}

void mostrar(struct ListaD *lista){
	while(lista!=NULL){
	printf("%d ", lista->dato);
	lista=lista->siguiente;
	
	}
}

int main(){
	struct ListaD *l=NULL;
	l=crear(2);
	l=insertar(l,10);
	l=insertar(l,15);
	l=insertar(l,20);
 	 l=insertar(l,3);
	mostrar(l);
  return 0;
}
