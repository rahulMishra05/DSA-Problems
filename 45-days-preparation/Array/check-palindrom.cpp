// Question => Check Palindrom

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    char arr[n];
    cout<<"Please enter any word: ";
    cin>>arr;

    bool check = 1;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }

    if(check == true){
        cout<<"Word is palindrom..."<<endl;
    }
    else
        cout<<"Word is not palindrom !!";

    return 0;
}