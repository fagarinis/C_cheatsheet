//
// Created by Federico on 22/09/2021.
//

#ifndef PRIMOPROGETTO_C_STRING_UTILS_H
#define PRIMOPROGETTO_C_STRING_UTILS_H

#endif //PRIMOPROGETTO_C_STRING_UTILS_H


#include <strings.h>
#include <stdio.h>


void stringTest() {
    // le stringhe in C sono array di char
    // \0 specifica la fine della stringa (server per compatibilità col le librerie di funzioni per stringhe del C)
    char string1[10] = {'c', 'i', 'a', 'o', '\0'};
    char string2[8] = {'c', 'i', 'a', 'o', 0};

    char string3[15] = "Hi Mom"; // qui \0 viene aggiunto automaticamente dopo la 'm' finale, il resto saranno spazi vuoti
    char string4[] = "Ciao"; // equivalente a char string3[5] = "Ciao";

    printf("[StringUtils.stringTest] INIT\n");
    int stringLength = strlen(string1);
    strcpy(string1, string3); // copia il contenuto di string3 in string1

    if (strcmp(string1, string2) == 0) { //
        printf("string1 is equal to string2\n");
    } else if (strcmp(string1, string2) < 0) {
        printf("string1 is less than string2\n");
    } else {
        printf("string1 is more than string2\n");
    }

    strcat(string1, " concat");


    printf("[StringUtils.stringTest] %s\n", string3);
    printf("[StringUtils.stringTest] %s\n", string1);
}