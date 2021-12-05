Funcion entrada (  )
	Escribir "Dime el primer lado del triangulo "
	Leer a
	Escribir "Dime el segundo lado del triangulo "
	Leer b
	Escribir "Dime el tercer lado del triangulo "
	Leer c
	calculo(a,b,c)
Fin Funcion

Funcion calculo ( a,b,c )
	Si a^2+b^2==c^2 Entonces
		salida()
	SiNo
		Escribir "No es un triangulo rectangulo"
	Fin Si
Fin Funcion

Funcion salida ( )
	Escribir "Si es un triangulo rectangulo"
Fin Funcion

Algoritmo triangulo
	entrada()
FinAlgoritmo
