#include "middle_str.h"
bool itc_isDigit(unsigned char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }else{
        return 0;
    }
}
unsigned char itc_toUpper(unsigned char c){
    if(c >= 90){
        c = c - 32;
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
bool itc_compare(string s1, string s2){
    int tr = 1;
    int fa = 0;
    for(int i = 0; i != '0'; i++){
    if(s1[i] != s2[i]){
        fa++;
    }else{
    tr++;
    }
    }
    if(fa > 0){
        return 0;
    }else{
    return 1;
    }
}
int itc_countWords(string str){
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z' && str[i] >= 'A' && str[i] <= 'Z' ){
            if(str[i] == ' '){
                kol++;
            }
        }
    }
        return kol;
}
