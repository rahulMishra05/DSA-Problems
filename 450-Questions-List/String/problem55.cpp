// Question 55 => Longest Repeating Subsequence

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "aabb";
    int n = str.size();
    // cout<<n;

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(str[i] == str[j]){
                count++;
                break;
            }
        }
    }

    cout<<count<<endl;
}