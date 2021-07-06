// Problem => Find the Union and Intersection if two sorted array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Two sorted array
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7};

    // Declaring array that will store union and intersection
    std::vector<int> unon;
    std::vector<int> inter;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){

            // This will find union
            if(arr1[i] == arr2[j]){
                unon.push_back(j);
            }

            // This will find intersection
            else if(arr1[i] != arr2[j]){
                inter.push_back(j);
            }
        }
    }



    
}