// Calcuate n^p using recursion

#include<iostream>
using namespace std;

int power(int n, int p){
    if(p<2){
        return 1;
    }

    int prePower = power(n, p-1);

    return n * prePower;
}

int main(){
    int n;
    cout<<"Please enter any number: ";
    cin>>n;

    int p;
    cout<<"Please enter the power: ";
    cin>>p;

    cout<<n<<" to the power "<<p<<" = "<<power(n, p);

}