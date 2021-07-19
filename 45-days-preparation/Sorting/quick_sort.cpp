// Quick Sort

#include<iostream>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l;
    int j= h;

    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            swap(arr[i], arr[j]);
        }

    }

    return j;
}

void quickSort(int arr[], int l, int h){
    if(l<h){
        int j;
        j  = partition(arr, l, h);
        quickSort(arr, l,j);
        quickSort(arr, j+1, h);

    }
}

int main(){
    int arr[5] = {5,4,3,2,1};
    quickSort(arr, 0, 4);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}