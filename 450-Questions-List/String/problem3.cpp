// Question 3 => Find duplicate characters in a string 

#include<iostream>
using namespace std;

int main(){
    string str = "Hello World";
    int n = str.size();

    int count =0;

    for(int i=0; i<n; i++){
        for(int j = i +1; j<n; j++){
            if(str[i] == str[j]){
                count++;
                cout<<str[i]<<endl;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}