#include<iostream>
using namespace std;

int count(int n){
    int ct=0;
    while(n>0){
       n= n/10;
         ct++;
    }
   
    return ct;
    
}

int main(){

    int n;
    
    cout<<"enter an intereger"<<endl;
    cin>>n;

    // int digit=count(n);
    
    cout<<"the number of digits in n is "<<count(n)<<endl;

    return 0;
}