Funcion entrada (  )
	Escribir "Dime la posicion del primer auto "
	Leer x01
	Escribir "Dime la velocidad del primer auto "
	Leer v1
	Escribir "Dime la aceleracion del primer auto "
	Leer a1
	Escribir "Dime la posicion del segundo auto "
	Leer x02
	Escribir "Dime la velocidad del segundo auto "
	Leer v2
	Escribir "Dime la aceleracion del segundo auto "
	Leer a2
	calculo(x01,v1,a1,x02,v2,a2)
Fin Funcion

Funcion calculo ( x01,v1,a1,x02,v2,a2 )
	a<-0.5*(a1-a2)
	b<-(v1-v2)
	c<-x01-x02
	rais<-b^2-4*a*c
	Si rais>0 Entonces
		t1<-(-b+rc(rais))/(2*a)
		t2<-(-b-rc(rais))/(2*a)
		x1<-x01+(v1*t1)+(0.5*(a1*t^2))
		x2<-x02+(v2*t2)+(0.5*(a2*t^2))
	Fin Si
	salida(t1,x1,t2,x2)
Fin Funcion

Funcion salida ( t1,x1,t2,x2 )
	Escribir "Los autos se encuentran en un tiempo " t1 " y una posicion " x1
	Escribir "Los autos se encuentran en un tiempo " t2 " y una posicion " x2
Fin Funcion

Algoritmo autos
	entrada()
FinAlgoritmo
