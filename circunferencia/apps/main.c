#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "circunferencia.h"

int main(){
	Punto p0=crear_punto(0,0);
	Punto p1=crear_punto(10,10);

	Circun cir=crear_circunferencia(p0,3);

	if(verificar_pertenece(cir,p1)==0)
		printf("No pertenece\n");
	else
		printf("Si pertenece\n");

	return 0;	
}