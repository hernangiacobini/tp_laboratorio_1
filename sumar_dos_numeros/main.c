#include <stdio.h>
#include <stdlib.h>

int sumarEnteros(int num1, int num2, int *valido);
int restarEnteros(int num1, int num2, int *valido);
int multiplicarEnteros(int num1, int num2, int *valido);
int dividirEnteros(int num1, int num2, int *valido);

int main()
{
    int num1;
    int num2;
    long resultado;
    int seleccion;
    int valido;

    printf("Escriba un numero:\n");
    scanf("%d", &num1);

    printf("Escriba otro numero:\n");
    scanf("%d", &num2);

    printf("Que operacion desea realizar?\n 1-suma \n 2-resta \n 3-multiplicar \n 4-dividir \n");
    scanf("%d", &seleccion);

    switch(seleccion)
    {
    case 1:
        if(sumarEnteros(num1, num2, &valido)==0)
        {
            resultado=valido;
        }
        else
        {
            printf("ERROR\n");
        }
        break;

    case 2:
        if(restarEnteros(num1, num2, &valido)==0)
        {
            resultado=valido;
        }
        else
        {
            printf("ERROR\n");
        }
        break;

    case 3:
        if(multiplicarEnteros(num1, num2, &valido)==0)
        {
            resultado=valido;
        }
        else
        {
            printf("ERROR\n");
        }
        break;
    case 4:
        if(dividirEnteros(num1, num2, &valido)==0)
        {
            resultado=valido;
        }
        else
        {
            printf("ERROR\n");
        }
        break;
    }

    printf("El resultado es: %d", resultado);

    return 0;
}

int sumarEnteros(int num1, int num2, int *valido)
{
    long resultado;
    int retorno=-1;
    resultado=num1+num2;

    if(resultado<32767)
    {
        *valido=resultado;
        retorno=0;
    }
    return retorno;
}

int restarEnteros(int num1, int num2, int *valido)
{
    long resultado;
    int retorno=-1;
    resultado=num1-num2;

    if(resultado<-32768)
    {
        *valido=resultado;
        retorno=0;
    }
    return retorno;
}

int multiplicarEnteros(int num1, int num2, int *valido)
{
    long resultado;
    int retorno=-1;
    resultado=num1*num2;

    if(resultado>-32768 || resultado<32767)
    {
        *valido=resultado;
        retorno=0;
    }
    return retorno;
}

int dividirEnteros(int num1, int num2, int *valido)
{
    long resultado;
    int retorno=-1;
    resultado=num1/num2;

    if(num2!=0)
    {
        *valido=resultado;
        retorno=0;
    }
    return retorno;
}
