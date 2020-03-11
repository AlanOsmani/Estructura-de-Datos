#include <stdio.h>
#include <stdlib.h> 

struct Doble{
	int dato;
	struct Doble *siguiente;
  struct Doble *anterior;
};

struct Doble * crear(int dato){
	struct Doble *nueva=NULL;
	nueva=(struct Doble *) malloc(sizeof(struct Doble));
	if(nueva==NULL){
		return NULL;
	}
	nueva->dato=dato;
	nueva->siguiente=NULL;
	return nueva;
} 

struct Doble * insertar(struct Doble *lista, int dato){
	struct Doble *nueva=crear(dato);
	nueva->siguiente=lista;
  lista->anterior=nueva;
	return nueva;
}

int main(void){
	struct Doble *miLista=crear(10);
	if(miLista==NULL){
		printf("No se pudo crear la lista\n");
		return -1;
