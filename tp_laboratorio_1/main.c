#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    int numUno=0;
	int numDos=0;
	float resultado;
	long factorialNumUno=0;
	char seguir='s';
    int opcion=0;
    char mensaje1[]="1- Ingresar 1er operando (A=x)\n";
    char mensaje2[]="2- Ingresar 2do operando (B=y)\n";

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%d)(valores entre -32768 y 32767)\n", numUno);
        printf("2- Ingresar 2do operando (B=%d)(valores entre -32768 y 32767)\n",numDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        getInt("\nElija una opcion\n",&opcion, 1, 9);

        switch(opcion)
        {
            case 1:
                getInt(mensaje1, &numUno, -32768, 32767);
                break;

            case 2:
                getInt(mensaje2, &numDos, -32768, 32767);
                break;

            case 3:
                if (suma(numUno,numDos,&resultado)==0)
                {
                    printf("El resultado de la suma es: %.0f\n", resultado);
                }
                break;

            case 4:
                if (resta(numUno,numDos, &resultado)==0)
                {
                    printf("El resultado de la resta es: %.0f\n", resultado);
                }
                break;

            case 5:
                if (divide(numUno,numDos, &resultado)==0)
                {
                    printf("El resultado de la division es: %.2f\n", resultado);
                }
                break;

            case 6:
                if (multiplica(numUno,numDos, &resultado)==0)
                {
                    printf("El resultado de la multiplicacion es: %.0f\n", resultado);
                }
                break;


            case 7:
                if(factorial(&numUno, &factorialNumUno)==0)
                {
                    printf("El factorial de %d es: %ld\n", numUno, factorialNumUno);
                }
                break;

            case 8:
                if(suma(numUno, numDos, &resultado)==0){
                printf("La suma entre %d y %d es:%.0f\n", numUno, numDos, resultado);}

                if(resta(numUno, numDos, &resultado)==0){
                printf("La resta entre %d y %d es: %.0f\n", numUno, numDos, resultado);}

                if(divide(numUno, numDos, &resultado)==0){
                printf("La division entre %d y %d es: %.2f\n", numUno, numDos, resultado);}

                if(multiplica(numUno, numDos, &resultado)==0){
                printf("La multiplicacion entre %d y %d es: %.0f\n", numUno, numDos, resultado);}

                if(factorial(&numUno, &factorialNumUno)==0){
                printf("El factorial de %d es: %ld\n", numUno, factorialNumUno);}

                break;

            case 9:
                seguir='n';
                break;
        }
	}

    return 0;
}
