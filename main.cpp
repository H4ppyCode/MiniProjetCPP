#include <iostream>

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

    std::cout << "Entrée la base du nombre à convertir: ";
    std::cin >> baseBefore;

    while (verification(baseBefore)){
            std::cout << "La base du nombre à convertir est mauvaise\n";
            std::cout << "Entrée la base du nombre à convertir: ";
            std::cin >> baseBefore;
    }

    std::cout << "Entrée la base du nombre apres conversion: ";
    std::cin >> baseAfter;

        while (verification(baseAfter)){
            std::cout << "La base du nombre apres conversion est mauvaise\n";
            std::cout << "Entrée la base du nombre apres conversion: ";
            std::cin >> baseAfter;
    }

    
    long long number;
    switch ( baseBefore )
      {
        case 2:
            std::cout << "Entrée la base du nombre apres conversion: ";
            std::cin >> number;
            if (baseAfter == 8) {std::cout << " 2To8 ";} //long long -> long long int
            if (baseAfter == 10) {std::cout << " 2To10 ";} // long long -> int
            if (baseAfter == 16) {std::cout << " 2To16 ";} // long long -> string
            break;
        case 8:
            if (baseAfter == 2) {} // long long -> int
            if (baseAfter == 10) {} // long long -> int
            if (baseAfter == 16) {} // long long -> strinf
            break;
        case 10:
            if (baseAfter == 2) {} // int -> long long
            if (baseAfter == 8) {} // int -> long long
            if (baseAfter == 16) {} //int -> String
            break;
        case 16:
            if (baseAfter == 2) {} // char -> long long 
            if (baseAfter == 8) {} // char -> long long int
            if (baseAfter == 10) {} // string -> int
            break;
         default:
            std::cout << " Error ";
      }

    std::cout << " \n \n ---Fin du Jeux--\n" ;
    std::cout << " La base du nombre à converir = " << baseBefore << "\n" ;
    std::cout << " La base du nombre apres conversion = " << baseAfter << "\n" ;
        std::cout << "------ \n \n " ;
    return 0;
}