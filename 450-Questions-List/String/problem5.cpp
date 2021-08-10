// Question 5 => Check whether one string is a rotation of another

/*
1. We have 2 string str1 and str2.
2. We will concatenate str1 with str1, and then check 
3. If str2 is present in the concatenated string or not. If yes then return true
4. NOTE: The length of the two string should be same.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "abcde";
    string str2 = "cdeab";

    bool result;

    // Main logic
    if(str1.length() != str2.length())
        result = false;
    else{
        string temp = str1 + str1;
        if(temp.find(str2) != string::npos)
            result = true;
    }

    cout<<result<<endl;
}