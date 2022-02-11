

#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main() {
    printbinary(9);

    // to check set & unset
    int a=9;
    int i=3;
    if(a&(1<<i)!=0){
        cout<<"set bit ";
    }
    else{
        cout<<"not set bit ";
    }
    // to set on ith posn
    printbinary(a |(1<<i));
    // to unset on ith posn
    printbinary(a &(~(1<<i)));
    // toggle
    printbinary(a^(1<<i));
    return 0;
}