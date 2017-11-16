#include <iostream>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* 
 * Base Charactors
 * H : 0b1001000
 * e : 0b1100101
 * l : 0b1101100
 * l : 0b1101100
 * o : 0b1101111
 * , : 0b0101100
 *   : 0b0100000
 * w : 0b1110111
 * o : 0b1101111
 * r : 0b1110010
 * l : 0b1101100
 * d : 0b1100100
 * ! : 0b0100001
 *
 * exor 
 * 0 0 -> 0
 * 0 1 -> 1
 * 1 0 -> 1
 * 1 1 -> 0
 *
 */

vector<char> v;

int func(char c){
    int temp = 0;
    switch((int)(c)){
        case 0 :
            temp = 0b000000000;
            break;
        case 1 :
            temp = 0b000010011;
            break;
        case 2 :
            temp = 0b000011111;
            break;
        case 3 :
            temp = 0b000001100;
            break;
        case 4 :
            temp = 0b001110011;
            break;
        case 5 :
            temp = 0b001100000;
            break;
        case 6 :
            temp = 0b001101100;
            break;
        case 7 :
            temp = 0b001111111;
            break;
        case 8 :
            temp = 0b000010101;
            break;
        case 9 :
            temp = 0b000000110;
            break;
        case 10 :
            temp = 0b000001010;
            break;
        case 11 :
            temp = 0b000011001;
            break;
        case 12 :
            temp = 0b001100110;
            break;
        case 13 :
            temp = 0b001110101;
            break;
        case 14 :
            temp = 0b001111001;
            break;
        case 15 :
            temp = 0b001101010;
            break;
        case 16 :
            temp = 0b000111101;
            break;
        case 17 :
            temp = 0b000101110;
            break;
        case 18 :
            temp = 0b000100010;
            break;
        case 19 :
            temp = 0b000110001;
            break;
        case 20 :
            temp = 0b001001110;
            break;
        case 21 :
            temp = 0b001011101;
            break;
        case 22 :
            temp = 0b001010001;
            break;
        case 23 :
            temp = 0b001000010;
            break;
        case 24 :
            temp = 0b000101000;
            break;
        case 25 :
            temp = 0b000111011;
            break;
        case 26 :
            temp = 0b000110111;
            break;
        case 27 :
            temp = 0b000100100;
            break;
        case 28 :
            temp = 0b001011011;
            break;
        case 29 :
            temp = 0b001001000;
            break;
        case 30 :
            temp = 0b001000100;
            break;
        case 31 :
            temp = 0b001010111;
            break;
        case 32 :
            temp = 0b001110110;
            break;
        case 33 :
            temp = 0b001100101;
            break;
        case 34 :
            temp = 0b001101001;
            break;
        case 35 :
            temp = 0b001111010;
            break;
        case 36 :
            temp = 0b000000101;
            break;
        case 37 :
            temp = 0b000010110;
            break;
        case 38 :
            temp = 0b000011010;
            break;
        case 39 :
            temp = 0b000001001;
            break;
        case 40 :
            temp = 0b001100011;
            break;
        case 41 :
            temp = 0b001110000;
            break;
        case 42 :
            temp = 0b001111100;
            break;
        case 43 :
            temp = 0b001101111;
            break;
        case 44 :
            temp = 0b000010000;
            break;
        case 45 :
            temp = 0b000000011;
            break;
        case 46 :
            temp = 0b000001111;
            break;
        case 47 :
            temp = 0b000011100;
            break;
        case 48 :
            temp = 0b001001011;
            break;
        case 49 :
            temp = 0b001011000;
            break;
        case 50 :
            temp = 0b001010100;
            break;
        case 51 :
            temp = 0b001000111;
            break;
        case 52 :
            temp = 0b000111000;
            break;
        case 53 :
            temp = 0b000101011;
            break;
        case 54 :
            temp = 0b000100111;
            break;
        case 55 :
            temp = 0b000110100;
            break;
        case 56 :
            temp = 0b001011110;
            break;
        case 57 :
            temp = 0b001001101;
            break;
        case 58 :
            temp = 0b001000001;
            break;
        case 59 :
            temp = 0b001010010;
            break;
        case 60 :
            temp = 0b000101101;
            break;
        case 61 :
            temp = 0b000111110;
            break;
        case 62 :
            temp = 0b000110010;
            break;
        case 63 :
            temp = 0b000100001;
            break;
        case 64 :
            temp = 0b000010100;
            break;
        case 65 :
            temp = 0b000000111;
            break;
        case 66 :
            temp = 0b000001011;
            break;
        case 67 :
            temp = 0b000011000;
            break;
        case 68 :
            temp = 0b001100111;
            break;
        case 69 :
            temp = 0b001110100;
            break;
        case 70 :
            temp = 0b001111000;
            break;
        case 71 :
            temp = 0b001101011;
            break;
        case 72 :
            temp = 0b000000001;
            break;
        case 73 :
            temp = 0b000010010;
            break;
        case 74 :
            temp = 0b000011110;
            break;
        case 75 :
            temp = 0b000001101;
            break;
        case 76 :
            temp = 0b001110010;
            break;
        case 77 :
            temp = 0b001100001;
            break;
        case 78 :
            temp = 0b001101101;
            break;
        case 79 :
            temp = 0b001111110;
            break;
        case 80 :
            temp = 0b000101001;
            break;
        case 81 :
            temp = 0b000111010;
            break;
        case 82 :
            temp = 0b000110110;
            break;
        case 83 :
            temp = 0b000100101;
            break;
        case 84 :
            temp = 0b001011010;
            break;
        case 85 :
            temp = 0b001001001;
            break;
        case 86 :
            temp = 0b001000101;
            break;
        case 87 :
            temp = 0b001010110;
            break;
        case 88 :
            temp = 0b000111100;
            break;
        case 89 :
            temp = 0b000101111;
            break;
        case 90 :
            temp = 0b000100011;
            break;
        case 91 :
            temp = 0b000110000;
            break;
        case 92 :
            temp = 0b001001111;
            break;
        case 93 :
            temp = 0b001011100;
            break;
        case 94 :
            temp = 0b001010000;
            break;
        case 95 :
            temp = 0b001000011;
            break;
        case 96 :
            temp = 0b001100010;
            break;
        case 97 :
            temp = 0b001110001;
            break;
        case 98 :
            temp = 0b001111101;
            break;
        case 99 :
            temp = 0b001101110;
            break;
        case 100 :
            temp = 0b000010001;
            break;
        case 101 :
            temp = 0b000000010;
            break;
        case 102 :
            temp = 0b000001110;
            break;
        case 103 :
            temp = 0b000011101;
            break;
        case 104 :
            temp = 0b001110111;
            break;
        case 105 :
            temp = 0b001100100;
            break;
        case 106 :
            temp = 0b001101000;
            break;
        case 107 :
            temp = 0b001111011;
            break;
        case 108 :
            temp = 0b000000100;
            break;
        case 109 :
            temp = 0b000010111;
            break;
        case 110 :
            temp = 0b000011011;
            break;
        case 111 :
            temp = 0b000001000;
            break;
        case 112 :
            temp = 0b001011111;
            break;
        case 113 :
            temp = 0b001001100;
            break;
        case 114 :
            temp = 0b001000000;
            break;
        case 115 :
            temp = 0b001010011;
            break;
        case 116 :
            temp = 0b000101100;
            break;
        case 117 :
            temp = 0b000111111;
            break;
        case 118 :
            temp = 0b000110011;
            break;
        case 119 :
            temp = 0b000100000;
            break;
        case 120 :
            temp = 0b001001010;
            break;
        case 121 :
            temp = 0b001011001;
            break;
        case 122 :
            temp = 0b001010101;
            break;
        case 123 :
            temp = 0b001000110;
            break;
        case 124 :
            temp = 0b000111001;
            break;
        case 125 :
            temp = 0b000101010;
            break;
        case 126 :
            temp = 0b000100110;
            break;
        case 127 :
            temp = 0b000110101;
            break;
        default : 
            break;
    }
    temp = (temp & 0b111) + ((temp & 0b11000) << 1) + ((temp & 0b100000) << 2) + ((temp & 0b1000000) << 3) + ((temp & 0b110000000) << 4);
    return temp;
}

void printBit(int a){
    v.push_back('`');
    if(a & 1){
        if((a >> 1) & 1){
            v.push_back('^');
        }else{
            v.push_back('\'');
            v.push_back('"');
            v.push_back('^');
            v.push_back('\'');
            v.push_back('\'');
            v.push_back('^');
        }
    }else{
        if((a >> 1) & 1){
            v.push_back('"');
            v.push_back('^');
            v.push_back('^');
        }else{
            v.push_back('^');
            v.push_back('"');
            v.push_back('^');
        }
    }
    a >>= 2;
    
    for(int i = 2; i < 13; ++i){
        if(a & 1){
            v.push_back('^');   
        }else{
            if(i < 12){
                v.push_back('\'');
                v.push_back('"');
                v.push_back('^');
                v.push_back('\'');
                v.push_back('\'');
                v.push_back('^');
            }else{
                v.push_back('"');
                v.push_back('"');
                v.push_back('^');
                v.push_back('\'');
                v.push_back('\'');
                v.push_back('"');
                v.push_back('^');
                v.push_back('^');
                v.push_back('^');
            }
        }
        a >>= 1;
    }

    return;
}

int main(){
    printf("input a string >> ");
    string s;
    char input;
    while(1){
        scanf("%c", &input);
        if(input == '\n' || input == EOF || input == '\0') break;
        s.push_back(input);
    }
    reverse(s.begin(), s.end());
    while(!s.empty()){
        printBit(func(s[0]));
        s.erase(s.begin());
    
    }

    while(!v.empty()){
        printf("%c", v[0]);
        v.erase(v.begin());
    }
    printf("|\n");
    return 0;
}
