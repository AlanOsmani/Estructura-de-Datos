#include<stdio.h>
#include<stdlib.h>

 struct nodo{

	int dato;
	struct nodo *siguiente;

};


struct nodo  *crear(int dato){
	struct nodo *nuevo=NULL;
       	nuevo=(struct nodo *)malloc(sizeof(struct nodo *));
	if (nuevo==NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=nuevo;
	return nuevo;
}

struct nodo *insertar(struct nodo *inicio, int dato){
	struct nodo *nuevo=crear(dato);
	struct nodo *aux=NULL;
	if(inicio==NULL){
		inicio=nuevo;
	}
	else{
	aux=inicio;
	while(aux->siguiente!=inicio){
		aux=aux->siguiente;
		}
	aux->siguiente=nuevo;
	aux=nuevo;
	aux->siguiente=inicio;
	}
 return  inicio;
}



void mostrar(struct nodo *lista){
  //printf("%d ",lista->dato);
	struct nodo *inicio=lista;
	do{
    printf("%d  ", lista->dato);
		lista=lista->siguiente;
  }
  
  while(lista!=inicio);	
}

int main(){
struct nodo *l=NULL;

	l=crear(6);
	l=insertar(l,10);
	l=insertar(l,12);
	l=insertar(l,14);
	l=insertar(l,16);
	mostrar(l);

return 0;
}

