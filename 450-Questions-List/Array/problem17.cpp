// Question 17 => Best time to buy and Sell stock

#include<bits/stdc++.h>
using namespace std;

int main(){
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price) / sizeof(price[0]);
    // vector<int>& price;

    int maxPro = 0;
    int minPrice = INT_MAX;

    for(int i=0; i<n; i++){
        minPrice = min(minPrice, price[i]);
        maxPro = max(maxPro, price[i] - minPrice);
    }

    cout<<maxPro<<endl;


}