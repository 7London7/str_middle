#include "strm.h"
bool itc_isDigit(unsigned char c){
    if(c >= '0' && c <= '9'){
        cout << 1;
    }else{
    cout << 0;
    }
}
unsigned char itc_toUpper(unsigned char c){
    if(c >= 90){
        c = c - 32;
    }else{
    c = c + 32;
    }
    return c;
}
unsigned char itc_changeCase(unsigned char c){
    if(c >= 97 && c <= 122){
        c = c - 32;
    return c;
    }
    if(c <= 90 && c >= 65){
    c = c + 32;
    return c;
    }else{
    return c;
    }
}
bool itc_Compare(string s1, string s2){
    for(int i = 0; i >= 0; i--){

    }
}
