// Question => Count and Say

#include<iostream>
using namespace std;

string countAndSay(int n){
    if(n==1)
        return "1";
    if(n==2)
        return "11";

    string str = "11";
    for(int i=3; i<=n; i++){

        str = str + '$';
        int len  = str.length();

        int cnt = 1;
        string tmp = "";

        for(int j=1; j<len; j++){
            if(str[j] != str[j-1]){
                
                tmp += cnt + '0';
                tmp = tmp + str[j-1];

                cnt = 1;
                
            }
            else{
                cnt++;
            }

        }

        str = tmp;
    }

    return str;
}

int main(){
    int N;
    cout<<"Please enter any number :"<<endl;
    cin>>N;
    cout<<countAndSay(N)<<endl;
    return 0;
}