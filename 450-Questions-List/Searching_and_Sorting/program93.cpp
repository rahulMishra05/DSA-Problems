// Question 93 => Find Square Root of an Integer

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter any number :";
    cin>>n;

    int result;

    if(n == 0 || n == 1)
        result = n;
    int i=1;
    result = 1;
    while(result <= n){
        i++;
        result = i*i;
    }

    cout<<i-1;
}