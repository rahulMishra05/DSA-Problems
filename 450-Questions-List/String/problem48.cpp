// Question 2 => Check whether a string is Palindrome or not

#include<iostream>
using namespace std;

int main(){
    string str = "LOL";
    int sizeee = str.size();

    bool check = 1;
    for(int i=0; i<sizeee; i++){
        if(str[i] != str[sizeee - 1 - i]){
            check = 0;
            break;
        }
    }

    cout<<check;
}