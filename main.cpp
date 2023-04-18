#include <iostream>
#include "functions/bin.h"
#include "functions/dec.h"
#include "functions/hex.h"
#include "functions/octo.h"
//Devlopped By Atreus & YGRECO 
float verification( long long value){
    if (value == 2 || value == 8 || value == 10 || value == 16){
            return false;
    } else {
        return true;
    }
}

int main() {
    long long int baseBefore, baseAfter;

    std::cout << "--Convertisseur de nombre ( Base : 2, 8, 10, 16) -- \n \n";

    std::cout << "Entrer la base du nombre à convertir: ";
    std::cin >> baseBefore;

    while (verification(baseBefore)){
            std::cout << "La base du nombre à convertir est mauvaise\n";
            std::cout << "Entrez la base du nombre à convertir: ";
            std::cin >> baseBefore;
    }

    std::cout << "Entrée la base du nombre après conversion: ";
    std::cin >> baseAfter;

        while (verification(baseAfter)){
            std::cout << "La base du nombre après conversion est mauvaise\n";
            std::cout << "Entrez la base du nombre après conversion: ";
            std::cin >> baseAfter;
    }

    
    long long number;
    int numberDec;

    switch ( baseBefore )
    
      {
        case 2:
            std::cout << "Entrez le nombre à convertir: ";
            std::cin >> number;
            if (baseAfter == 8) {std::cout << "New number : " << BinToOct(number);} //long long -> long long int
            if (baseAfter == 10) {std::cout << "New number : " << BinToDec(number);;} // long long -> int
            if (baseAfter == 16) {std::cout << "New number : " << BinToHex(number);;} // long long -> string
            else {std::cout << "Error ";}
            break;
        case 8:
            std::cout << "Entrez le nombre à convertir: ";
            std::cin >> number;
            if (baseAfter == 2) {std::cout << "Nouveau nombre  : " << OctToBin(number);} // long long -> int
            if (baseAfter == 10) {std::cout << "Nouveau nombre  : " << OctToDec(number);} // long long -> int
            if (baseAfter == 16) {std::cout << "Nouveau nombre  : " << OctToHex(number);} // long long -> strinf
            break;
        case 10:
            std::cout << "Entrez le nombre à convertir: ";
            std::cin >> numberDec;
            if (baseAfter == 2) { std::cout << "Nouveau nombre  : " << DecToBin(numberDec); } // int -> long long
            if (baseAfter == 8) { std::cout << "Nouveau nombre  : " << DecToOct(numberDec); } // int -> long long
            if (baseAfter == 16) { std::cout << "Nouveau nombre  : " << DecToHex(numberDec); } //int -> String
            break;
        case 16:
            if (baseAfter == 2) {
                char charHex[200];
                std::cout << "Entrer le nombre à convertir: ";
                std::cin >> charHex;
                std::cout << "Nouveau nombre  : " << HexToBin(charHex);
            } // char -> long long 
            if (baseAfter == 8) {
                char charHex[200];
                std::cout << "Entrer le nombre à convertir: ";
                std::cin >> charHex;
                std::cout << "Nouveau nombre  : " << HexToOct(charHex);
            } // char -> long long int
            if (baseAfter == 10) {
                std::string charDec;
                std::cout << "Entrer le nombre à convertir: ";
                std::cin >> charDec;
                std::cout << "Nouveau nombre : " << HexToDec(charDec);
            } // string -> int
            break;
         default:
            std::cout << " Error ";
      }

    std::cout << " \n \n ---Fin du Jeux--\n" ;
    return 0;
}

