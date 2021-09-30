// Question 90 => Find first and last positions of an element in a sorted array.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n;
    cout<<"Please enter number that whose posiiton you want to find: ";
    cin>>n;

    for(int i=1; i<9; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    int first, last;

    for(int i=0; i<9; i++){
        if(arr[i] == n){
            first = i;
            break;
        }
    }

    for(int i=0; i<9; i++){
        if(arr[i] == n){
            last = i;
        }
    }

    cout<<"First Occurrence = "<<first<<endl;
    cout<<"Last Occurrence = "<<last;
}