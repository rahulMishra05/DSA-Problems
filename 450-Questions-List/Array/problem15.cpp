// Next Permutation 

/*
1. We can find next permutation using C++ STL
    @ Suppose we have a sting s = "bca"
    @ Code for that will be 
        string s = "bca";
        bool res = next_permutation(s.begin(), s.end());

        if(res == false){
            cout<<"No word possible";
        }
        else{
            cout<< s << endl;
        }

2. In the brute force approach we will calculate all the possible permutation
    @ After that we will find the next permutation.
    @ In case we have to find the next permutation of last element we can say that it would be 1st element.
    @ Time complexity => O(N*N)


*/

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a) {
        int idx = -1;
        int n = a.size();
        for(int i=n-1; i>0; i--){
            if(a[i] > a[i-1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(a.begin(), a.end());
        }
        else{
            int prev = idx;
            for(int i=idx+1;i<n;i++){
                if(a[i]>a[idx-1] and a[i]<=a[prev]){
                    prev = i;
                }
            }
            swap(a[idx-1], a[prev]);
            reverse(a.begin()+idx, a.end());
        }
    }

int main(){

     vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
   
    nextPermutation(vect);

    return 0;
}