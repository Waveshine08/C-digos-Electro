#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a;
float b;
float c;

void entrada ();
void calculo (float,float,float);
void salida (float,float);

int main(int argc, char** argv) {
	entrada();
	system("pause");
	return 0;
}

void entrada () {
	cout<<"Dime el valor de a ";
	cin>>a;
	cout<<"Dime el valor de b ";
	cin>>b;
	cout<<"Dime el valor de c ";
	cin>>c;
	calculo(a,b,c);
}

void calculo (float a, float b, float c) {
	float x1;
	float x2;
	float raiz;
	raiz=pow(b,2)-4*a*c;
	if(raiz>0){
		x1=(0-b+sqrt(raiz))/2*a;
		x2=(0-b-sqrt(raiz))/2*a;
	}
	if(raiz==0){
		x1=(0-b+sqrt(raiz))/2*a;
		x2=(0-b-sqrt(raiz))/2*a;
	}
	if(raiz<0){
		cout<<"Una raiz negativa es un valor imaginario\n";
	}
	salida(x1,x2);
}

void salida (float x1, float x2) {
	printf("Las dos respuestan son %8.2f y %8.2f\n",x1,x2);
}
