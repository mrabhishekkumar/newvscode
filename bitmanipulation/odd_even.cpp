

#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main() {
    for(int i=0;i<8;i++){
        printbinary(i);
        if(i&1!=0){
            cout<<"odd number\n";
        }
        else{
            cout<<"even number\n";
        }
    }
    return 0;
}