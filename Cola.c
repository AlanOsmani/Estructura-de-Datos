#include<stdio.h>
#include<stdlib.h>

struct cola{
	int dato;
	struct cola siguiente;
	struct cola primero;
	struct cola ultimo;

};


struct cola *crear(int dato){
	nuevo=(struct cola *)malloc(sizeof(struct cola *));
	if(nuevo==NULL){
		aux=cola;
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	nuevo->primero=NULL;
	nuevo->ultimo=NULL
}



struct cola *insertar(struct cola *cola, int dato){
	struct cola *nuevo=crear(dato);
	nueva=(struct cola )* malloc(sizeof(struct cola*));
	if (nuevo==NULL){
		return NULL;
	}
	
	if cola(cola!=NULL){
		while(cola->siguiente!=NULL)
		cola=cola->siguiente;
	}
	cola->siguiente=nuevo;
	return cola;	
	else {
		return nuevo;
	}

}

void eliminar(*struct cola *cola){
	cola->dato=dato;
	cola->siguiente=NULL;
}


void mostrar (*struct cola *cola){




}


int main(){

	struct cola cola=NULL;
	cola=crear(8):
	cola=insertar(cola, 9);
	cola=insertar(cola,8);
	cola=insertar(cola,10);
	mostrar(cola);
return 0;
}
