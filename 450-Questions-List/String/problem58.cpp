// Problem 58 => Split the Binary string into two substring with equal 0's and 1's

#include<iostream>
using namespace std;

int split(string str, int n){
    // This is to count number of 0 and 1 in string
    int count0 = 0, count1 = 0;

    // This is to count desired number of pairs in the string
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }

        if(count0 == count1){
            cnt++;
        }
    }

    if(cnt == 0){
        return -1;
    }

    return cnt;
}

int main(){
    string str;
    cout<<"Please enter any string consisting 0 and 1 only: ";
    cin>>str;

    int n = str.length();

    cout<<split(str, n);
}