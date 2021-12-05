#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float x01;
float v1;
float a1;
float x02;
float v2;
float a2;

void entrada ();
void calculo (float,float,float,float,float,float);
void salida (float,float,float,float);

int main(int argc, char** argv) {
	entrada();
	return 0;
}

void entrada () {
	cout<<"Dime la posicion del primer auto ";
	cin>>x01;
	cout<<"Dime la velocidad del primer auto ";
	cin>>v1;
	cout<<"Dime la aceleracion del primer auto ";
	cin>>a1;
	cout<<"Dime la posicion del segundo auto ";
	cin>>x02;
	cout<<"Dime la velocidad del segundo auto ";
	cin>>v2;
	cout<<"Dime la aceleracion del segundo auto ";
	cin>>a2;
	calculo(x01,v1,a1,x02,v2,a2);
}

void calculo (float x01, float v1, float a1, float x02, float v2, float a2) {
	float a;
	float b;
	float c;
	float t1;
	float t2;
	float x1;
	float x2;
	float raiz;
	a=0.5*(a1-a2);
	b=(v1-v2);
	c=x01-x02;
	raiz=pow(b,2)-4*a*c;
	if(raiz>0){
		t1=(-b+sqrt(raiz))/(2*a);
		t2=(-b-sqrt(raiz))/(2*a);
		x1=x01+(v1*t1)+(0.5*(a1*pow(t1,2)));
		x2=x02+(v2*t2)+(0.5*(a2*pow(t2,2)));
	}
	salida(t1,x1,t2,x2);
}

void salida (float t1, float x1, float t2, float x2) {
	printf("Los autos se encuentran en un tiempo %8.2f y una posicion %8.2f\n",t1,x1);
	printf("Los autos se encuentran en un tiempo %8.2f y una posicion %8.2f",t2,x2);
}
