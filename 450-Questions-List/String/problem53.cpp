// Question No => 53 Count & Say problem

#include<iostream>
#include<string>
using namespace std;

string countAndSay(int n){
    if(n == 1) return "";

    string res = "1";
    while(--n){
        string cur = "";
        for(int i=0; i < res.size(); i++){
            int count = 1;
            while(i+1 < res.size() and res[i] == res[i+1]){
                count++;
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }

    return res;
}

int main(){
    int n;
    cout<<"Please enter any number: ";
    cin>>n;

    cout<<countAndSay(n)<<endl;
}