#include <stdio.h>
#include "EDPila.h"

int main(void) {
    int dato;
    int copia;
    float Odato;
    float Ocopia;
    char cadena[6];
    int inv;
/*
    TPila unEjemplo;



    CrearPila(&unEjemplo,sizeof(dato));//apilar

    printf("Ingresa el dato \n");
    scanf("%i",&dato);
    Apilar(&unEjemplo,&dato);

    printf("Ingresa el dato \n");
    scanf("%i",&dato);
    Apilar(&unEjemplo,&dato);

    printf("Ingresa otro dato \n");
    scanf("%f",&Odato);
    Apilar(&unEjemplo,&Odato);

    printf("Ingresa una cadena \n");
    scanf("%s",cadena);
    Apilar(&unEjemplo,&cadena);

    printf("La pila esta vacia?: %i\n", PilaVacia(unEjemplo));

    Desapilar(&unEjemplo,&cadena);
    printf("El valor del dato es: %s\n", cadena);

    Desapilar(&unEjemplo,&Ocopia);
    printf("El valor del dato es: %f\n", Ocopia);
    Desapilar(&unEjemplo,&copia);
    printf("El valor del dato es: %i\n", copia);
    Desapilar(&unEjemplo,&copia);
    printf("El valor del dato es: %i\n", copia);
    printf("La pila esta vacia?: %i\n", PilaVacia(unEjemplo));
    */

//Camino dificil y largo para apilar par numeros capicua
    TPila original;
    TPila copia2;
    TPila inverso;

    //Creamos las pilas
    CrearPila(&original,sizeof (dato));
    CrearPila(&copia2,sizeof (dato));
    CrearPila(&inverso,sizeof (dato));
//9102019

    dato =9;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =1;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =0;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =2;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =0;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =1;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);

    dato =9;
    Apilar(&original,&dato);
    Apilar(&copia2,&dato);
    int obj=1,compro=1;
    while (PilaVacia(copia2)!=1 && compro==1){
        Desapilar(&copia2,&dato);
        if (obj==dato){
            printf("Elemento encontrado");
            compro=0;
        }
        //Apilar(&inverso,&dato);
    }
/*
    //Comparar las pilas
    while (PilaVacia(original)!=1 && compro==0) {
        Desapilar(&original,&dato);
        Desapilar(&inverso,&inv);
        if (dato != inv) {
            compro = 1;
        } else {
            compro = 0;
        }
    }

    if (compro==0){
        printf("El numero es capicua");
    } else{ printf("El numero no es capicua");}

    */
}