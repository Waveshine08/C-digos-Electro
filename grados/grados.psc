Funcion entrada (  )
	Escribir "Dime los grados que va a convertir "
	Leer grados
	Escribir "Dime la escala que va a usar por su leta mayucula "
	Leer escala
	calculo(grados,escala)
Fin Funcion

Funcion calculo ( grados,escala )
	Segun escala Hacer
		'K':
			celcius<-grados-273.15
			farenheit<-((grados-273.15)*1.8)+32
		'C':
			kelvin<-grados+273.15
			farenheit<-(grados*1.8)+32
		'F':
			kelvin<-((grados-32)/1.8)+273.15
			celcius<-(grados-32)/1.8
	Fin Segun
	salida(grados,kelvin,celcius,farenheit)
Fin Funcion

Funcion salida ( grados,kelvin,celcius,farenheit )
	Si celcius==0 Entonces
		Escribir grados " grados celcius"
		Escribir "equivale a " farenheit " grados farenheit"
		Escribir "equivale a " kelvin " grados kelvin"
	Fin Si
	Si farenheit==0 Entonces
		Escribir grados " grados farenheit"
		Escribir "equivale a " celcius " grados celcius"
		Escribir "equivale a " kelvin " grados kelvin"
	Fin Si
	Si kelvin==0 Entonces
		Escribir grados " grados kelvin"
		Escribir "equivale a " farenheit " grados farenheit"
		Escribir "equivale a " celcius " grados celcius"
	Fin Si
Fin Funcion

Algoritmo temperatura
	entrada()
FinAlgoritmo
