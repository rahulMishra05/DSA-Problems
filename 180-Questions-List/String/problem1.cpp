// Problem 1 Day 15 : Reverse words in a string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "Rahul";
    int size = str.size();

    for(int i=size; i>=0; i--){
        cout<< str[i];
    } 
    
    cout<<endl;

    string str2 = "Mishra";
    reverse(str2.begin(), str2.end());
    cout<<str2;
}