#ifndef OCTO_H
#define OCTO_H

#include <string>

// Fonction pour convertir un nombre octal en binaire
long long OctToBin(long long oct);

// Fonction pour convertir un nombre octal en décimal
int OctToDec(long long oct);

// Fonction pour convertir un nombre octal en hexadécimal
std::string OctToHex(long long oct);

#endif
