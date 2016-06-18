/*
 * Cola.h
 *
 *  Created on: 9/06/2016
 *      Author: Martin
 */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Ncola{
	char letra;
	struct Ncola *siguiente;

};

struct Ncola *front, *rear, *aux;

class Ccola{					//Nombre de la clase
public:						//Declarando funciones publicas
	void Insertar(char letra2);		//Funcion push
	void Mostrar();				//Funcion que muestra los valores ingresador
	void Frente();				//Muestra el frente de la cola, osea el primer valor ingresado
	void Eliminar();			//Elimina el primer valor ingresado

};

void Ccola::Insertar(char letra2){		
	if(front==NULL){			//Se pregunta si el puntero esta vacio
		front=new(Ncola);		//Se crea el primer nodo y el puntero apunta al mismo
		front->letra=letra2;		//se le asigna el valor al nodo 
		rear=front;			//Se le dice al puntero rear donde estara
	}
	else{
		aux=new(Ncola);			//Se crea otro puntero y el puntero aux apunta al mismo 
		rear->siguiente=aux;		//se enlaza el puntero por medio del puntero rear
		aux->letra=letra2;		//se le asigna el valor al nuevo nodo
		rear=aux;			//el puntero rear se movera conforme se ingrese nuevos punteros
	}
	rear->siguiente=NULL;			//se le dice al puntero siguiente, del ultimo nodo, que apunte a NULL
}

void Ccola::Mostrar(){
	aux=front;				//Le decimos al puntero que vuelva al principio
	if(front==NULL){			
		cout<<"No existen valores."<<endl;	//Se imprime el mensaje escrito, si y solo si no se han ingresado valores
	}
	else{
		while(aux!=NULL){			//Se impone la condicion hasta qu el puntero aux apunte a NULL
			cout<<"En cola:"<<aux->letra<<endl;//Aca se imprimira el valor de los nodos
			aux=aux->siguiente;			//El puntero aux se movera para que asi se impriman los valores que tienen asignados de los nodos
		}
	}
}

void Ccola::Frente(){
	if(front==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		cout<<"En el frente:"<<front->letra;		//Aca se muestra el frente de la cola, el primer valor.

	}
}

void Ccola::Eliminar(){
	if(front==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		front=front->siguiente;				//Le indicamos al puntero front que ahora apuntara al siguiente valor y asi se elimina el primer valor ingresado
	}
}
