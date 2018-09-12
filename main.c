#include <stdio.h>
#include <stdlib.h>

 /*Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen */


int area(int aux);

int main(void)
{
 int radio, respuesta;


 printf("Indique el radio del circulo: %d",radio);
 scanf("%d",&radio);
 respuesta=area(radio);
 printf("El area del circulo es: %d",respuesta);

     return 0;

}
int area(int aux)
{
 int total;
 total=(aux*aux)*3.14;
 return total;
}
