Funcion entrada (  )
	Escribir "Dime las horas "
	Leer h
	calculo(h)
Fin Funcion

Funcion calculo ( h )
	Si h<=2 Entonces
		dinero<-horas*5
	Fin Si
	Si h<=5 y h>2 Entonces
		dinero<-((horas-2)*(4))+10
	Fin Si
	Si h<=10 y h>5 Entonces
		dinero<-((horas-5)*(3))+22
	Fin Si
	Si h>10 Entonces
		dinero<-((horas-10)*(2))+37
	Fin Si
	salida(dinero)
Fin Funcion

Funcion salida ( dinero )
	Escribir "El total a pagar es " dinero
Fin Funcion

Algoritmo estacionamiento
	entrada()
FinAlgoritmo
