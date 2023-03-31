#include <iostream>
#include <cmath>
#include <string>
#include "dec.h"
using namespace std;

// Fonction pour convertir un nombre décimal en binaire
long long DecToBin(int dec) {
    long long bin = 0;
    int i = 1;
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

// Fonction pour convertir un nombre décimal en octal
long long DecToOct(int dec) {
    long long oct = 0;
    int i = 1;
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

// Fonction pour convertir un nombre décimal en hexadécimal
string DecToHex(int dec) {
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


