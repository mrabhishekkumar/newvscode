#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;


const int N=1e7+10;
vector<bool> isprime(N,1);
vector<int> lp(N,0),hp(N,0);

int main() {
    isprime[0]=isprime[1]=false;
    for(int i=2;i<N;i++){
        if(isprime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isprime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    for(int i=1;i<100;i++){
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    return 0;
}