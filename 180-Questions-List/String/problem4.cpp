// Question => Implement ATOI/STRSTR 

#include<iostream>
using namespace std;

int myATOI(char* str){
    int res = 0;
    int sign = 1;
    int i=0;

    if(str[0] == '-'){
        sign = -1;
        i++;
    }

    for(; str[i] != '\0'; ++i){
        res = res * 10 + str[i] - '0';
    }

    return sign * res;
}

int main(){
    char str[] = "420";
    int val = myATOI(str);
    cout<< val;
    return 0;
}