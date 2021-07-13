// Calcualte the factorial of a number

#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);


    /*
    WORKING OF THIS FUNCTION

    1. factorial(4) = 4 * factorial(3);
    2. factorial(4) = 4 * 3 * factorial(2);
    3. factorial(4) = 4* 3 * 2 * factorial(1);
    4. factorial(4) = 4 * 3 * 2 * 1;
    => factorial(4) = 24;
    */
}

int main(){

    int n;
    cout<<"Please enter any number: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" is "<<factorial(n);

    return 0;
}