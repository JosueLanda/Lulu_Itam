/*Title: Concurso Programacion.Problema huevos. 
Author: Luis Daniel Martínez Arana
Date: Jan 23 2023
Info: Determina cuanto tiempo tarda en cocer una cantidad n de huevos con una olla de tamaño m.
*/
#include <stdio.h>

int main()
{

int huevos,tamano_olla;

while(1){
scanf("%d %d",&huevos,&tamano_olla);
if(!huevos) break;
printf("%d",((huevos-1)/tamano_olla+1)*10);
}
	return 1;
}






