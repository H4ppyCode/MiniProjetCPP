#include "dec.h"
#include <cmath>
#include <iostream>


int decimalToBinary(int dec, int* bin) {
    // Affichage du nombre saisi
    std::cout << "Le nombre saisi est : " << dec << std::endl;

    // Conversion en binaire
    int i = 0;
    while (dec > 0) {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    // Affichage du résultat
    std::cout << "Le nombre en binaire est : ";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << bin[j];
    }
    std::cout << std::endl;

    return 0;

}

int main(){
    int dec = 42;
    int bin[8] = {0}; // un tableau de 8 entiers initialisé à 0

    decimalToBinary(dec, bin);

    
}