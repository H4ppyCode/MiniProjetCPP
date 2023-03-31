//Les includes
#include <iostream>
#include <cmath>
using namespace std;

// Fonctions
int BinToDec(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;
}
string BinToHex(long long n) {
    // Conversion en décimal
    int dec = BinToDec(n);

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

long long int BinToOct(long long bin)
{
    long long int octal, place;
    int i = 0, rem, val;
 
    octal = 0ll;
    place = 0ll;
 
    place = 1;
 
    // Binary to octal conversion
    while (bin > 0) {
        rem = bin % 1000;
 
        switch (rem) {
        case 0:
            val = 0;
            break;
        case 1:
            val = 1;
            break;
        case 10:
            val = 2;
            break;
        case 11:
            val = 3;
            break;
        case 100:
            val = 4;
            break;
        case 101:
            val = 5;
            break;
        case 110:
            val = 6;
            break;
        case 111:
            val = 7;
            break;
        }
 
        octal = (val * place) + octal;
        bin /= 1000;
 
        place *= 10;
    }
 
    return octal;
}



int main() {
    long long n;
    cout << "Entrez un nombre binaire : ";
    cin >> n;

    // // Conversion en décimal
    // int dec = BinToDec(n);
    // cout << "Le nombre décimal correspondant est : " << dec << endl;

    // Conversion en hexadécimal
    // string hex = BinToHex(n);
    // cout << "Le nombre hexadécimal correspondant est : " << hex << endl;

    // Conversion en octal
    // long long oct = BinToOct(n);
    // cout << "Le nombre octal correspondant est : " << oct << endl;

    return 0;
    
}