#ifndef DECIMAL_H
#define DECIMAL_H

#include <string>

// Fonction pour convertir un nombre décimal en binaire
long long DecToBin(int dec);

// Fonction pour convertir un nombre décimal en octal
long long DecToOct(int dec);

// Fonction pour convertir un nombre décimal en hexadécimal
std::string DecToHex(int dec);

#endif
