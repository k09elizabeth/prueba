#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

/*Recuerden modificar la direccion  */
#define ARCHIVO "/home/utnso/Documentos/ProcesoFS/disco.bin"

int main() {

FILE *fichero;

int nBytes;

	fichero=fopen(ARCHIVO, "r+b"); 
	/* Colocar el cursor al final del fichero*/
	
	fseek(fichero, 0, SEEK_END);
	
	nBytes = ftell(fichero); 
	/* Tamaño en bytes*/
	
   printf("Tamanio del  archivo %d \n",  nBytes);

fclose(fichero);

}






