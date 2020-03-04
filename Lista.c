#include <stdio.h>
#include <stdlib.h> 

struct Lista{
	int dato;
	struct Lista *siguiente;
};

struct Lista * crear(int dato){
	struct Lista *nueva=NULL;

	nueva=(struct Lista *) malloc(sizeof(struct Lista));
	if(nueva==NULL){
		return NULL;
	}
	nueva->dato=dato;
	nueva->siguiente=NULL;
	return nueva;
} 

struct Lista * insertar(struct Lista *lista, int dato){
	struct Lista *nueva=crear(dato);
	nueva->siguiente=lista;
	return nueva;
}

struct Lista * invertir(struct Lista *lista){
  struct Lista *siguiente=NULL;
  struct Lista *anterior=NULL;
  while(lista!=NULL){
    siguiente=lista->siguiente;
    lista->siguiente=anterior;
    anterior=lista;
    lista=siguiente;
  }
  return anterior;
}

/*struct Lista * eliminar(struct Lista *lista, int n){
  int i=0;
  while(lists!=NULL && i<n){
    
  }
}*/

void mostrar(struct Lista *lista){
	while(lista!=NULL){
		printf("%d,",lista->dato);
		lista=lista->siguiente;
	}
	printf("\n");
}	

int main(void){
	struct Lista *miLista=crear(10);
	if(miLista==NULL){
		printf("No se pudo crear la lista\n");
		return -1;
	}
	miLista=insertar(miLista,12);
	miLista=insertar(miLista,27);
	miLista=insertar(miLista,2020);
	miLista=insertar(miLista,1);
	mostrar(miLista);
  miLista=invertir(miLista);
  mostrar(miLista);
	return 0;
}
