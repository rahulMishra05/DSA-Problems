// Question => Convert the characters into upper case and lowercase

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "rahul";

    // Convert into upper case

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }cout<< str<<endl;


    // Convert into lower case

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }cout<<str<<endl;

    // Using in-built functions to convert to upper case

    transform(str.begin(), str.end(), str.begin(), :: toupper);
    cout<<str<<endl;

    // Using in-built functions to convert to lower case

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
}