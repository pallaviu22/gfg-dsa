#include<iostream>
using namespace std;

// int gtsum(int arr[] , int size){
//         int sum=0;
//         for (int i = 0; i < size; i++)
//         {
//             sum=sum+arr[i];
            
//         }
//         return sum;
//     }


int getsum(int arr[], int size){
    if(size%2==0){
        return 0;
    }
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }

    return sum;
    

    }

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);


    // cout << "Elements of the array: ";
    // for (int i = 0; i < size; ++i) {
    //     cout << arr[i] << endl;
    // }

    // cout << "Sum of elements: " << gtsum(arr, size) << endl;

    cout<<"hehe"<<getsum(arr,size)<<endl;
    return 0;
}
