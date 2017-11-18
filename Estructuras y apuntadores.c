#include<stdio.h>

struct Pila{
	int total;
	int arreglo[10];
	int indice;
};

struct Pila pilita;

void inicializa(struct Pila *arr);
void push(struct Pila *arr, int valor);
void imprimePila(struct Pila *arr);

int main(){
	push(&pilita,10);
	push(&pilita,155);
	push(&pilita,210);
	push(&pilita,55);
	
	imprimePila(pilita);
	
	return 0;
}

void push(struct Pila *arr, int valor){
	arr->arregle[arr->indice] = valor;
	arr->indice = arr->indice+1;
	
}
void imprimePila(struct Pila arr){
	int i;
	for(i=0;i<arr.indice;i++)
	printf("%d, ",arr.arregle[i]);
}

void inicializa(struct Pila *arr){
	arr->indice=0;
	arr->total=10;
}
