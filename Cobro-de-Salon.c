#include <stdio.h>
int main()
{
  float precio, tiempo, multiplicacion;
  printf("\n\n BIENVENIDO AL SALON");
  printf("\n\n El precio que se tiene es de $500 por hora");
  printf("\n\n ¿Cuánto tiempo se va a quedar en el salon?");
  scanf("%f",& tiempo);
  multiplicacion = tiempo * 500;
  printf("\n El precio total seria de %f" , multiplicacion);
  printf("\n Eso es todo, ya puede preparar su evento, gracias por su preferencia");
  return 0;

}
