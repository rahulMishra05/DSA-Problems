// Question 91 => Find a Fixed Point (Value equal to index) in a given array

#include<iostream>

using namespace std;

int main(){
    int arr[] = {0, 2, 5, 8, 17};
    int result;
    for(int i=0; i<5; i++){
        if(arr[i] == i){
            result = i;
            break;
        }
        else 
            result = -1;
    }

    cout<<result;
    return 0;
}