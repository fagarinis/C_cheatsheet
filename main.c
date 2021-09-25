#include <stdio.h>
#include "mainStructs.h"

#include "string-utils.h"
#include "pointer-utils.h"
#include "casting-test.h"

// la struct viene passata per valori (che vengono copiati), non per riferimento!
void changePoint(struct Point point) {
    printf("[changePoint] parametri iniziali, x: %f, y: %f\n", point.x, point.y);
    point.x = 10;
    point.y = 50;
}

int main() {
    printf("Hello, World!\n");

    // dichiarazione di variabile con nuovo struct anonimo
    struct {
        int base;
        int height;
    } triangle;

    struct Point point = {2, 3};
    changePoint(point);
    printf("[main] nuovi parametri dopo changePoint, x: %f, y: %f\n", point.x, point.y);


    Studente giovanni = {26, 27};
    Studente arrayStudenti[100];

    giovanni.eta = 26;
    printf("%d\n", giovanni.eta);
    printf("Size of Studente object %d\n byte\n", sizeof(giovanni));


//    stringTest();
//    pointerTest();
//    arrayPointerTest();
    testCasting();

    return 0;
}

