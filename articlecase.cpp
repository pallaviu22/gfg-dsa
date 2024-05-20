#include<iostream>
using namespace std;

int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Return the index of the element if found
        }
    }
    return -1;  // Return -1 if the element is not found in the array
}


int main(){

    int arr[]={1,2,3,4,5};
    int x;
    cout<<"enter integer x"<<endl;
    cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"x is present is x index"<<search(arr,n,x);

    return 0;
}