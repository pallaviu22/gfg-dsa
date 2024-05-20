#include<iostream>
using namespace std;

int ctoF(int C){
    int F=((9*C)/5)+32;
    return F;
}

int main(){
    int C;
    cout<<"enter a no"<<endl;
    cin>>C;

    cout<<"C to F of "<<C<<" is "<<ctoF(C)<<endl;
    return 0;
}