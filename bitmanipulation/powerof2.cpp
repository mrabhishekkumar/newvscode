#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    if(n&(n-1)){
        cout<<"not power of 2 "<<endl;
    }
    else{
        cout<<"power of 2 "<<endl;
    }
    return 0;
}