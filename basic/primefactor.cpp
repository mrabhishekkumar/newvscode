#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prime_factor;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            prime_factor.push_back(i);
            n/=i;
        }
    }
    for(int prime:prime_factor){
        cout<<prime<<" ";
    }
    return 0;
}