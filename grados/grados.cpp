#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float grados;
char escala;

void entrada ();
void conversion (float,char);
void salida (float,float,float,float);

int main(int argc, char** argv) {
	entrada();
	system("pause");
	return 0;
}

void entrada () {
	cout<<"Dime los grados que va a convertir ";
	cin>>grados;
	cout<<"Dime la escala que va a usar por su leta mayucula ";
	cin>>escala;
	conversion(grados,escala);
}

void conversion (float grados, char escala) {
	float kelvin;
	float farenheit;
	float celcius;
	kelvin=0;
	farenheit=0;
	celcius=0;
	switch(escala){
		case'K':{
			celcius=grados-273.15;
			farenheit=((grados-273.15)*1.8)+32;
			break;
		}
		case'C':{
			kelvin=grados+273.15;
			farenheit=(grados*1.8)+32;
			break;
		}
		case'F':{
			kelvin=((grados-32)/1.8)+273.15;
			celcius=(grados-32)/1.8;
			break;
		}
	}
	salida(grados,kelvin,celcius,farenheit);
}

void salida (float grados, float kelvin, float celcius, float farenheit) {
	if(celcius==0){
		printf("%8.2f grados celcius\n",grados);
		printf("equivale a %8.2f grados farenheit\n",farenheit);
		printf("equivale a %8.2f grados kelvin\n",kelvin);
	}
	if(farenheit==0){
		printf("%8.2f grados farenheit\n",grados);
		printf("equivale a %8.2f grados celcius\n",celcius);
		printf("equivale a %8.2f grados kelvin\n",kelvin);
	}
	if(kelvin==0){
		printf("%8.2f grados kelvin\n",grados);
		printf("equivale a %8.2f grados farenheit\n",farenheit);
		printf("equivale a %8.2f grados celcius\n",celcius);
	}
}
