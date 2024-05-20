#include<iostream>
using namespace std;

int absolutenumber(int n){
    if(n<0)
    return -n;
    else 
    return n;
}

int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;

    cout<<"the absolute value of n is "<<absolutenumber(n)<<endl;


    return 0;
}