// Sort the given string

#include<iostream>
#include<algorithm>     // To use the sort function 
#include<string>

using namespace std;

int main(){
    string s1 = "dhvfljrejghejgrljhgardfjghbadbyugukgkruhu";

    sort(s1.begin(), s1.end());

    cout<<s1<<endl;
}