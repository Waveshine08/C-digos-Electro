#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a;
float b;
float c;

void entrada ();
void calculo (float,float,float);
void salida ();

int main(int argc, char** argv) {
	entrada();
	system("pause");
	return 0;
}

void entrada () {
	cout<<"Dime el primer lado del triangulo ";
	cin>>a;
	cout<<"Dime el segundo lado del triangulo ";
	cin>>b;
	cout<<"Dime el tercer lado del triangulo ";
	cin>>c;
	calculo(a,b,c);
}

void calculo (float a, float b, float c) {
	if(pow(a,2)+pow(b,2)==pow(c,2)){
		salida ();
	}
	else{
		cout<<"No es un triangulo rectangulo\n";
	}
}

void salida () {
	cout<<"Si es un triangulo rectangulo\n";
}
