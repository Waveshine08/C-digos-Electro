#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float edad;
float calificacion;

void entrada ();
void calculo (float,float);
void salida (float);

int main(int argc, char** argv) {
	entrada();
	return 0;
}

void entrada () {
	cout<<"Dime la edad ";
	cin>>edad;
	cout<<"Dime la calificacion ";
	cin>>calificacion;
	calculo(edad,calificacion);
}

void calculo (float edad, float calificacion) {
	float beca;
	if(edad>18){
		if(calificacion>=9 and calificacion<=10){
			beca=2000;
			salida(beca);
		}
		if(calificacion>=7.5 and calificacion<9){
			beca=1000;
			salida(beca);
		}
		if(calificacion>=6 and calificacion<7.5){
			beca=500;
			salida(beca);
		}
		if(calificacion<6){
			beca=0;
			salida(beca);
		}
	}
	if(edad<=18){
		if(calificacion>=9 and calificacion<=10){
			beca=3000;
			salida(beca);
		}
		if(calificacion>=8 and calificacion<9){
			beca=2000;
			salida(beca);
		}
		if(calificacion>=6 and calificacion<8){
			beca=100;
			salida(beca);
		}
		if(calificacion<6){
			beca=0;
			salida(beca);
		}
	}
	
}

void salida (float beca) {
	if(beca!=0){
		printf("Su beca correspondiente es de %8.2f\n",beca);
	}
	if(beca==0){
		printf("Para recibir una beca estudien mas el proximo ciclo escolar\n");
	}
	
}
