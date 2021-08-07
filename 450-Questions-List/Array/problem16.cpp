// Question => Count Inversion 

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int arr[] = {8,4,2,1};

    long count = 0;

    for(int i=0; i<n; i++){
        for(int j = i+1; i<n; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }

    cout<<count<<endl;
}