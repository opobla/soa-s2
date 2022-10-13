

#include <stdio.h>
#include "add.h"


int francisco();
int alejandro();
int Alexander();
int davidRuiz();
int funcAdri();
int funcion_jaime(void);
int cesarmartin();
int cristianoronaldo();
int edug();
int heraszorita();
int mario();
int nacho();
int sergio();
int simone();
int valeria();
int impresora();

int main() {
    int a;

    printf("Hello SOA\n");
    printf("New version 2.0\n");
    printf("---------------------------------\n");

    a = add(3, 4);
    printf("The result is %d \n", a);

    a = mul(8, 2);
    printf("The result is %d \n", a);
    printf("--And now the rest of the people--\n");

    francisco(); 
    alejandro();
    Alexander();
    davidRuiz();
    funcAdri();
    funcion_jaime();
    cesarmartin();
    cristianoronaldo ();
    edug(); 
    heraszorita(); 
    mario(); 
    nacho();
    sergio();
    simone();
    valeria();
    impresora(); 

    return(0);
}

