#include<stdio.h>
#include<stdlib.h>

struct Pila{
  int tope;
  int dato;
  struct Pila *siguiente;
};

//0 = Algo salio mal
struct Pila * crear (int dato){
  struct Pila *nueva=NULL;
  nueva=(struct Pila *)malloc(sizeof(struct Pila));
  if(nueva==NULL){
    return NULL;
  }
  nueva->siguiente=NULL;
  nueva->dato=dato;
  nueva->tope=0;
  return nueva;
}

//push
struct Pila * insertar(int dato, struct Pila *pila){
  struct Pila *nuevo=crear(dato);
  nuevo->siguiente=pila;
  nuevo->tope=pila->tope;
  (nuevo->tope)++;
  return nuevo;
}
//-1 - falso ,   1- verdadero
int vacia(struct Pila *pila){
  if(pila->tope==-1){
    return 1;
  }
  else{
    return -1;
  }
}
//eliminar o pop
struct Pila * eliminar(struct Pila *pila){
  if(vacia(pila)==1){
    printf("Desbordamiento");
    exit(1);
  }
  return(pila->siguiente);
}

void mostrar(struct Pila *pila){
  int tope=pila->tope;
  for(int i=0;i<=tope;i++){
    printf("%d\n", pila->dato);
    pila=eliminar(pila);
  }
}

int main(){
  struct Pila *s;
  s=crear(1);
  s=insertar(2,s);
  s=insertar(3,s);
  s=insertar(8,s);
  s=insertar(3,s);
  s=insertar(8,s);
  s=eliminar(s);
  s=eliminar(s);
  s=eliminar(s);
  s=eliminar(s);
  
  mostrar(s);
}
