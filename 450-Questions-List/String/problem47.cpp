// Question 1 => Reverse a String 

#include<iostream>
using namespace std;

int main(){
    string s = "Rahul";
    int sizeee = s.size();

    for(int i=sizeee; i>=0; i--){
        cout<<s[i];
    }
}