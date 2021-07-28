// Question => Longest Common Prefix

#include<iostream>
#include<climits>

using namespace std;

string longestCommonPrefix(string a[], int n){
    int count=0, flag=0, min=INT_MAX;
    
    // Here we are finding the shortest string
    string s;
    for(int i=0; i<n; i++){
        int len = a[i].length();
        if(len < min){
            min = len;
            s = a[i];
        }
    }

    for(int i=0; i<min; i++){
        for(int j=0; j<n; j++){
            if(a[j][i] != s[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
        count++;
    }
    if(count == 0)
        return "-1";
    else
        return s.substr(0,count);    
}

int main(){
    string a[] = {"geeksforgeeks", "geeks", "geezer"};
    int n = 3;

    cout<<longestCommonPrefix(a, n);

}