Funcion entrada ( Argumentos )
	
Fin Funcion

Funcion calculo ( edad,calificaciones )
	Si edad>18 Entonces
		Si calificaciones>=9 y calificaciones<=10 Entonces
			beca<-2000
			salida(beca)
		Fin Si
		Si calificaciones>=7.5 y calificaciones<=9 Entonces
			beca<-1000
			salida(beca)
		Fin Si
		Si calificaciones>=6 y calificaciones<=7.5 Entonces
			beca<-500
			salida(beca)
		Fin Si
		Si calificaciones<6 Entonces
			beca<-0
			salida(beca)
		Fin Si
	Fin Si
	Si edad<=18 Entonces
		Si calificaciones>=9 y calificaciones<=10 Entonces
			beca<-3000
			salida(beca)
		Fin Si
		Si calificaciones>=8 y calificaciones<=9 Entonces
			beca<-2000
			salida(beca)
		Fin Si
		Si calificaciones>=6 y calificaciones<=8 Entonces
			beca<-100
			salida(beca)
		Fin Si
		Si calificaciones<6 Entonces
			beca<-0
			salida(beca)
		Fin Si
	Fin Si
Fin Funcion

Funcion salida ( beca )
	Si beca<>0 Entonces
		Escribir "Su beca correspondiente es de " beca
	Fin Si
	Si beca==0 Entonces
		Escribir "Para recibir una beca estudien mas el proximo ciclo escolar"
	Fin Si
Fin Funcion

Algoritmo becas
	Escribir "Dime la edad "
	Leer edad
	Escribir "Dime la calificacion "
	Leer calificaciones
	calculo(edad,calificaciones)
FinAlgoritmo
