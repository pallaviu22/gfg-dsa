#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3 ) return true;
    if(n%2==0 || n%3==0) return false;
    for (int i = 5; i*i < n; i+=6){
        if(n%i==0)
        return false;
    }
   return true;
    
}

int main(){

    int n;

    cout<<"enter a number"<<endl;
    cin>>n;

    cout<<"the statement that the given number is prime is "<<bool(isPrime(n))<<endl;

    
    return 0;
}