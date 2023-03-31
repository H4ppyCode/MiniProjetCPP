#include <iostream>
#include <cmath>
#include <string>
#include "octo.h"
using namespace std;

// Fonction pour convertir un nombre octal en binaire
long long OctToBin(long long oct) {
    int decimal = 0, i = 0;
    long long bin = 0;
    while (oct != 0) {
        int rem = oct % 10;
        oct /= 10;
        decimal += rem * pow(8, i);
        ++i;
    }
    i = 1;
    while (decimal != 0) {
        bin += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return bin;
}

// Fonction pour convertir un nombre octal en décimal
int OctToDec(long long oct) {
    int dec = 0, i = 0;
    while (oct != 0) {
        int rem = oct % 10;
        oct /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    return dec;
}

// Fonction pour convertir un nombre octal en hexadécimal
string OctToHex(long long oct) {
    // Conversion en décimal
    int dec = OctToDec(oct);

    // Conversion en hexadécimal
    string hex = "";
    string hex_table = "0123456789ABCDEF";
    while (dec != 0) {
        int rem = dec % 16;
        hex = hex_table[rem] + hex;
        dec /= 16;
    }
    if (hex == "") {
        hex = "0";
    }
    return hex;
}
