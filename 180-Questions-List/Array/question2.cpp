// Problem No. 2 => Find the repeating and the missing

#include <bits/stdc++.h>
using namespace std;
  
void printTwoElements(int arr[], int size)
{
    int i;
    cout << " The repeating element is ";
  
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }
  
    cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
}


/*
1. In the first approach we will initialize a frequency array of size 7. (Suppose we are given an array of size 6 in question)
    @Let us consider the array given in question as A1 and frequency array that we created as A2. A1 = {4,3,6,2,1,1,}
        and A2 = {0,0,0,0,0,0,0}
    @ What we will do we will traves the array A1 and we will find the number 4, so we will update the value in A2 array at location 4 by one.
        And follow this step and continue to traverse the array A1.
    @ Than after traversing the whole A1 array, what will happen at some index point in A2 array value will be 1 at some index value will be 2 and at
        some index value will be 0.
    @ So where the value is 2 we can say that location is repeating in array A1, similarly the index with 0 value is missing from array A1.
    @ Time complexity of this will be O(2n) and space complexity will be O(n)

2. The code here that I have writte use this approach "Use elements as Index and mark the visited places."
    @ Traverse the array. While traversing, use the absolute value of every element as index and make the value at this
        index as negative to mark it visited. If something is already marked negative then this is the repeating element.
        To find missing, traverse the array again and look for a positive value.
*/