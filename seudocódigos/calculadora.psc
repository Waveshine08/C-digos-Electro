Funcion entrada (  )
	Escribir "Dime el primer numero "
	Leer primero
	Escribir "Dime el segundo numero "
	Leer segundor
	Escribir "Dime que operacion va a realizar, + para suma, - resta, * multiplicacion, / divison "
	Leer srmd
	calculo(primero,segundor,srmd)
Fin Funcion

Funcion calculo ( primero,segundor,srmd )
	Segun smrd Hacer
		'+':
			resultado<-primero+segundor
		'-':
			resultado<-primero-segundor
		'*':
			resultado<-primero*segundor
		'/':
			resultado<-primero/segundor
	Fin Segun
	salida(resultado)
Fin Funcion

Funcion salida ( resultado )
	Escribir "El resultado es " resultado
Fin Funcion

Algoritmo calculadora
	entrada()
FinAlgoritmo
