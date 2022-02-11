
#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

double eps=1e-7;

int main() {
    double x;
    cin>>x;
    double lo=1,hi=x,mid;
    while(hi-lo>eps){
        mid=(lo+hi)/2;
        if(mid*mid<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<" "<<hi<<endl;
    
    return 0;
}