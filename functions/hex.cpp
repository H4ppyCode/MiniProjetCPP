#include <iostream>
#include "hex.h"

int HexToDec(std::string hexVal)
{
    int len = hexVal.size();
 
    // Initializing base value to 1, i.e 16^0
    int base = 1;
 
    int dec_val = 0;
 
    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
 
            // incrementing base by power
            base = base * 16;
        }
 
        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
 
            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}




long long int HexToBin(char hex[])
{
    long long int bin, place;
    int i = 0, rem, val;
 
    bin = 0ll;
    place = 0ll;
 
    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;
 
        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            std::cout << "Invalid hexadecimal input.";
        }
 
        place = 10000;
    }
 
    return bin;
}
 
// Function to convert Binary to Octal
long long int BinToOct_2(long long bin)
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
 
// Function to Convert
// Hexadecimal Number to Octal Number
long long int HexToOct(char hex[])
{
    long long int octal, bin;
 
    // convert HexaDecimal to Binary
    bin = HexToBin(hex);
 
    // convert Binary to Octal
    octal = BinToOct_2(bin);
 
    return octal;
}


