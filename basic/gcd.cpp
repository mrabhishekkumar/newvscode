// GCD of 98 and 56 is 14

#include<iostream>
using namespace std;
int main(){
    int x,y,gcd;
    cin>>x>>y;
    if(y>x){
        int temp=y;
        y=x;
        x=temp;
    }
    for(int i=1;i<=y;i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    cout<<"gcd of 2 number is "<<gcd;
    return 0;
}