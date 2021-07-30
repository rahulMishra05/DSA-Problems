// Problem => Pow(x,n) Implement this function 

#include<iostream>
using namespace std;

double myPow(double x, int n){
    double ans = 1.0;
    long long nn = n;

    if(nn < 0) nn = -1 * nn;
    while(nn){
        if(nn % 2){
            ans = ans * x;
            nn = nn - 1;
        }
        else{
            x = x * x;
            nn = nn / 2;
        }
    }
    if(n<0) ans = (double)(1.0) / (double)(ans);
    return ans;
}

int main(){
    double x;
    cout<<"Please enter any number: ";
    cin>>x;

    int n;
    cout<<"Please enter numner of power :";
    cin>>n;
}



/*
1. If the power is negative then take care of that. And apply the brute force approach
    @ In brute force approach run  a loop till n then apply this condition 
        res = res * x;
    @ Time complexity = O(n)
    @ Space complexity = O(1)

2. To optimize our solition we can do this thing 
    @ 2^10 = (2 x 2)^5 = 4^5
        4^5 = 4 x 4^4

    @ In this way we will find the answer.
    @ Time complexity will be O(logn)
*/