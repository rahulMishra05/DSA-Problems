// Problem 2 Day 15: Find the longest Palindrome in a String

#include<iostream>
#include<string>

using namespace std;

void printString(string s, int start, int end){
    for(int i=start; i<=end; i++){
        cout<<s[i];
    }
}

void longestPal(string s){
    int low, hi;

    int start = 0, end = 1;

    for(int i=1; i<s.length(); i++){

        // Even Substring
        
        low = i-1;
        hi = i;

        while(low>=0 && hi<s.length() && s[low] == s[hi]){
            if(hi-low+1>end){
                start = low;
                end = hi -low +1;
            }

            low--;
            hi++;
        }


        // Odd Substring
        low = i-1;
        hi = i+1;

        while(low>=0 && hi<s.length() && s[low] == s[hi]){
            if(hi-low+1>end){
                start = low;
                end = hi -low +1;
            }

            low--;
            hi++;
        }

    }

    printString(s, start, start+end-1);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        longestPal(s);
        cout<<endl;
    }

    return 0;
}