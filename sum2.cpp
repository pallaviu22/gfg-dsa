#include<iostream>
using namespace std;

int main(){
    
    int n;
    int sum=0;

    cout<<"enter a natural number"<<endl;
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        
        sum=sum+i;

    }

    cout<<"the sum of n natural number is "<<sum<<endl;
    
    return 0;
}