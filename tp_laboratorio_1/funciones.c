#include <stdio.h>
#include <stdlib.h>


/**
Solicita un número al usuario y lo valida
param *numero Se carga el numero ingresado
param mensaje[] Es el mensaje a ser mostrado
return es siempre 0 ya que si no se escribe el numero entre los limites no se guarda en la variable
**/

int getInt(char mensaje[], int *numero, int min, int max)
{
	int num;

    printf("%s", mensaje);
	scanf("%d", &num);

	if(num<=max && num>=min)
	{
        *numero=num;
	}
	else
    {
        printf("ERROR: Rango invalido");
    }

	return 0;
}

/**
realiza la suma entre los numeros ingresados
param num1 toma el valor para A cargado desde la funcion getInt()
param num2 toma el valor para B cargado desde la funcion getInt()
param *resultado guarda en la variable resultado (long) del main el resultado
return es siempre 0, ya que cualquier suma entre los valores solicitados no supera el limite del resultado (long)
**/

int suma(int num1, int num2, float *resultado)
{
	*resultado=num1+num2;

return 0;
}

/**
realiza la resta entre los numeros ingresados
param num1 toma el valor para A cargado desde la funcion getInt()
param num2 toma el valor para B cargado desde la funcion getInt()
param *resultado guarda en la variable resultado (long) del main el resultado
return es siempre 0, ya que cualquier resta entre los valores solicitados no supera el limite del resultado (long)
**/

int resta(int num1, int num2, float *resultado)
{
	*resultado=num1-num2;

return 0;
}

/**
realiza la multiplicacion entre los numeros ingresados
param num1 toma el valor para A cargado desde la funcion getInt()
param num2 toma el valor para B cargado desde la funcion getInt()
param *resultado guarda en la variable resultado (long) del main el resultado
return es siempre 0, ya que cualquier multiplicacion entre los valores solicitados no supera el limite del resultado (long)
**/

int multiplica(int num1, int num2, float *resultado)
{
    *resultado=num1*num2;

return 0;
}

/**
realiza la division entre los numeros ingresados
param num1 toma el valor para A cargado desde la funcion getInt()
param num2 toma el valor para B cargado desde la funcion getInt()
param *resultado guarda en la variable resultado (long) del main el resultado
return si el segundo valor es distinto de 0 es 0 sino es -1
**/

float divide(int num1, int num2, float *resultado)
{
    int retorno=-1;

	if(num2!=0)
	{
		*resultado=(float)num1/(float)num2;
		retorno=0;
    }
    else
    {
        printf("El segundo numero no puede ser 0 para la division. Cambielo\n");
    }

return retorno;
}

/**
calcula el factorial del valor A cargado desde la funcion getInt()
param *num1 toma el valor de A
param *factorialNum1 guarda el resultado del factorial
return si el numero se encuentra entre 1 y 12 es 0, sino -1
**/
int factorial(int *num1, long *factorialNum1)
{
    int i;
    int num=*num1;
    long fact=1;
    int retorno=-1;

    if(num<1 || num>12)
    {
        printf("ERROR: Solo se permite calcular el factorial de los numeros comprendidos entre 1 y 12. Cambie el primer numero\n");
    }
    else
    {
        for(i=2;i<=num;i++)
        {
            fact=fact*i;
        }
        *factorialNum1=fact;
        retorno=0;
    }

return retorno;
}


