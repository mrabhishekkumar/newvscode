#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

double eps=1e-7;
double multiply(double mid,int n){
    double ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }
    return ans;
}
int main() {
    double x;
    int n;
    cin>>x>>n;
    
    double lo=1,hi=x,mid;
    while(hi-lo>eps){
        mid=(lo+hi)/2;
        if(multiply(mid,n)<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<" "<<hi<<endl;
    
    return 0;
}