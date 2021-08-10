// Question 6 => Write a Program to check whether a string is a valid shuffle of two strings or not

/*
1. Suppose we have two string st1 = "onetwofour" and str2 = "hellofourtwooneworld"
*/

#include<bits/stdc++.h>
using namespace std;

bool shuffleString(string A, string B)
{
    int n = A.length();
    int m = B.length();
 
    // Return false if length of
    // string A is greater than
    // length of string B
    if (n > m) {
        return false;
    }
    else {
 
        // Sort string A
        sort(A.begin(), A.end());
 
        // Traverse string B
        for (int i = 0; i < m; i++) {
 
            // Return false if (i+n-1 >= m)
            // doesn't satisfy
            if (i + n - 1 >= m)
                return false;
 
            // Initialise the new string
            string str = "";
 
            // Copy the characters of
            // string B in str till
            // length n
            for (int j = 0; j < n; j++)
                str.push_back(B[i + j]);
 
            // Sort the string str
            sort(str.begin(), str.end());
 
            // Return true if sorted
            // string of "str" & sorted
            // string of "A" are equal
            if (str == A)
                return true;
        }
    }
    return true;
}

int main(){
    string str1 = "onetwofsour";
    string str2 = "hellofourtwooneworld";

    bool result = shuffleString(str1, str2);

    if(result)
        cout<<"YES.......";
    else
        cout<<"NO!!!!!";
    

    return 0;
}