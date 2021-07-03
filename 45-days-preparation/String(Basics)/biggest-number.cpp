// Question => Form the biggest number from the numeric string
// We will the sort the string in decreasing order and that will be the maximum number

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "764535644223489";

    sort(str.begin(), str.end(), greater<int>());

    cout<<str<<endl;

    return 0;
}
 