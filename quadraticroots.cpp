#include<iostream>
#include<cmath>
using namespace std;

int quadraticRoots(int a, int b, int c) {
        // code here
        int x=b*b-4*a*c;
        if(x<0){
            return -1;
        }
        else {
            int root1=(-b+sqrt(b*b-4*a*c))/2*a;
            int root2=(-b-sqrt(b*b-4*a*c))/2*a;
            return root2;
            return root1;
        }
    }

 
int main(){
    
    return 0;
}