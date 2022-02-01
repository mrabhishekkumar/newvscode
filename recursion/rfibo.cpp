// n=5 0 1 1 2 3

#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }
    
}
int main(){
    int n,i=0;
    cin>>n;
    while(i<n){
        cout<<" "<<fibo(i);
        i++;
    }
    return 0;
}