// Question 62 => Balanced Parentheses Problem

#include<iostream>
#include<stack>
using namespace std;

bool balancedParan(string s, int n){
    stack<char> st;
        
        for(auto i: s){
            if(i == '(' or i == '{' or i == '[')
                st.push(i);
            
            else{
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']'))
                    return false;
                st.pop();
            }
        }
        
        return st.empty();
}

int main(){
    string str;
    cout<<"Please enter expression: ";
    cin>>str;

    int n = str.length();

    if(balancedParan(str, n)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}