#include <stdio.h>
#include <stdlib.h>

int sumarEnteros(int num1, int num2);
int restarEnteros(int num1, int num2);
int multiplicarEnteros(int num1, int num2);
int dividirEnteros(int num1, int num2);

int main()
{
    int num1;
    int num2;
    int resultado;
    int seleccion;

    printf("Escriba un numero:\n");
    scanf("%d", &num1);

    printf("Escriba otro numero:\n");
    scanf("%d", &num2);

    printf("Que operacion desea realizar?\n 1-suma \n 2-resta \n 3-multiplicar \n 4-dividir \n");
    scanf("%d", &seleccion);

    switch(seleccion)
    {
    case 1:
        resultado=sumarEnteros(num1, num2);
        break;
    case 2:
        resultado=restarEnteros(num1, num2);
        break;
    case 3:
        resultado=multiplicarEnteros(num1, num2);
        break;
    case 4:
        resultado=dividirEnteros(num1, num2);
        break;
    }

    printf("El resultado es: %d", resultado);

    return 0;
}

int sumarEnteros(int num1, int num2)
{
    int resultado;
    resultado=num1+num2;
    return resultado;
}

int restarEnteros(int num1, int num2)
{
    int resultado;
    resultado=num1-num2;
    return resultado;
}

int multiplicarEnteros(int num1, int num2)
{
    int resultado;
    resultado=num1*num2;
    return resultado;
}

int dividirEnteros(int num1, int num2)
{
    int resultado;
    resultado=num1/num2;
    return resultado;
}
