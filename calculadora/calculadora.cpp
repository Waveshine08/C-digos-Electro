#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float primero;
float segundo;
char srmd;

void entrada ();
void calculo (float,float,char);
void salida (float);

int main(int argc, char** argv) {
	entrada();
	system("pause");
	return 0;
}

void entrada () {
	cout<<"Dime el primer numero ";
	cin>>primero;
	cout<<"Dime el segundo numero ";
	cin>>segundo;
	cout<<"Dime que operacion va a realizar, + para suma, - resta, * multiplicacion, / divison ";
	cin>>srmd;
	calculo(primero,segundo,srmd);
}

void calculo (float primero, float segundo, char smrd) {
	float resultado;
	switch(smrd){
		case'+':{
			resultado=primero+segundo;
			break;
		}
				case'-':{
			resultado=primero-segundo;
			break;
		}
				case'*':{
			resultado=primero*segundo;
			break;
		}
				case'/':{
			resultado=primero/segundo;
			break;
		}
	}
	salida(resultado);
}

void salida (float resultado) {
	printf("El resultado es %8.4f\n",resultado);
}
