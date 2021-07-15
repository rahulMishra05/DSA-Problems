// Question => Reverse a string using recursion 

#include<iostream>
using namespace std;

void reverse(string s){
    
    if(s.length() == 0){
        // Base case
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){

    reverse("Rahul");

    return 0;
}