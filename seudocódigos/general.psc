Funcion entrada (  )
	Escribir "Dime el valor de a "
	Leer a
	Escribir "Dime el valor de b "
	Leer b
	Escribir "Dime el valor de c "
	Leer c
	calculo(a,b,c)
Fin Funcion

Funcion calculo ( a,b,c )
	rais<-b^2-4*a*c
	Si rais>0 Entonces
		x1<-(0-b+rc(rais))/2*a
		x2<-(0-b-rc(rais))/2*a
	Fin Si
	Si rais==0 Entonces
		x1<-(0-b+rc(rais))/2*a
		x2<-(0-b-rc(rais))/2*a
	Fin Si
	Si rais<0 Entonces
		Escribir "Una raiz negativa es un valor imaginario"
	Fin Si
	salida(x1,x2)
Fin Funcion

Funcion salida ( x1,x2 )
	Escribir "Las dos respuestan son " x1 " y " x2
Fin Funcion

Algoritmo general
	entrada()
FinAlgoritmo
