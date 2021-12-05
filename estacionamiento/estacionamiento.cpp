#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float horas;

void entrada ();
void calculo (float);
void salida (float);

int main(int argc, char** argv) {
	entrada();
	system("pause");
	return 0;
}

void entrada () {
	cout<<"Dime las horas ";
	cin>>horas;
	calculo(horas);
}

void calculo (float horas) {
	float dinero;
	if (horas<=2){
		dinero=horas*5;
	}
	if (horas<=5 and horas>2){
		dinero=((horas-2)*(4))+10;
	}
	if (horas<=10 and horas>5){
		dinero=((horas-5)*(3))+22;
	}
	if (horas>10){
		dinero=((horas-10)*(2))+37;
	}
	salida(dinero);
}

void salida (float dinero) {
	printf("El total a pagar es %8.2f\n",dinero);
}
