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

class Ccola{
public:
	void Insertar(char letra2);
	void Mostrar();
	void Frente();
	void Eliminar();

};

void Ccola::Insertar(char letra2){
	if(front==NULL){
		front=new(Ncola);
		front->letra=letra2;
		rear=front;
	}
	else{
		aux=new(Ncola);
		rear->siguiente=aux;
		aux->letra=letra2;
		rear=aux;
	}
	rear->siguiente=NULL;
}

void Ccola::Mostrar(){
	aux=front;
	if(front==NULL){
		cout<<"No existen valores."<<endl;
	}
	else{
		while(aux!=NULL){
			cout<<"En cola:"<<aux->letra<<endl;
			aux=aux->siguiente;
		}
	}
}

void Ccola::Frente(){
	if(front==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		cout<<"En el frente:"<<front->letra;

	}
}

void Ccola::Eliminar(){
	if(front==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		front=front->siguiente;
	}
}
