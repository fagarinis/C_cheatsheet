//
// Created by Federico on 23/09/2021.
//

#ifndef PRIMOPROGETTO_C_POINTER_UTILS_H
#define PRIMOPROGETTO_C_POINTER_UTILS_H

#endif //PRIMOPROGETTO_C_POINTER_UTILS_H

#include <stdlib.h>
#include <stdio.h>

void increment(int* i) { // il puntatore viene copiato (passaggio per valore)
    (*i)++; // qui viene deferenziato, incrementando il valore puntato
}

void pointerTest() {
    int* p_a = NULL; //dichiarazione puntatore a un intero (8 byte)
    int* p_b = NULL;
    int* p_c = NULL;


    int b = 10;
    int c = 5;
    // assegnamenti puntatore
    p_b = &b; // con & ottengo l'indirizzo di b (ovvero il puntatore al valore)
    p_a = p_b;
    p_c = &c;


    //Deferenziazione notare che nelle istruzioni * ha un significato diverso dell'inizializzazione
    *p_c = *p_c * (*p_a); // effettua l'operazione andando ai valori puntati dai puntatori,

    printf("[PointerUtils.pointerTest] a: %d\n", *p_a);
    printf("[PointerUtils.pointerTest] b: %d\n", *p_b);
    printf("[PointerUtils.pointerTest] c: %d\n", *p_c);
    increment(p_c);
    printf("[PointerUtils.pointerTest] c after increment: %d\n", *p_c);
}

void arrayPointerTest() {
    int* p_array = NULL;
    int array[] = {7, 13, 20};

    p_array = array; // le variabili array sono puntatori ad array[0]
    p_array = &array; // equivalente alla riga sopra


    printf("[PointerUtils.pointerTest] array[1]: %d\n", p_array[1]);

    p_array++; // ARITMETICA PUNTATORI - l'indirizzo è incrementato di sizeof(int), ora p_array punta ad array[1]
    printf("[PointerUtils.pointerTest] array[1]: %d\n", *p_array);
}


