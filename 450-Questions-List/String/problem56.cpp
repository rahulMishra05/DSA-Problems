// Question 56 => Print all Subsequence of String 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "abc";
    int n = str.size();

    // Time complexity of this loop is O(n)
    for(int i=0; i<n; i++){
        cout<<str[i]<<", ";
    }

    // Time complexity of this loop is O(n^2)
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(str[i] == '\0' || str[j] == '\0')
                break;
            else
                cout<<str[i]<<str[j]<<", ";
        }
    }

    // Time complexity of this loop is O(n)
    for(int i=0; i<n; i++){
        cout<<str[i];
    }
}