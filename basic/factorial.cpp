#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;



int main() {
    int n,fact=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}

/* PRE COMPUTATION TECHNIQUE TO FIND FACTORIAL 

const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    } 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    return 0;
}
*/