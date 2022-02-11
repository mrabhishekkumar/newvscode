
#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main() {
    for(char c='A';c<='Z';c++){
        cout<<c<<endl;
        printbinary(int(c));
    }
    for(char c='a';c<='z';c++){
        cout<<c<<endl;
        printbinary(int(c));
    }
    // to change in lower case set 5th bit 
    char A='A';
    char a=A | (1<<5);
    cout<<a<<endl;
    // to change in upper case unset 5th bit
    cout<<char(a&(~(1<<5)))<<endl;
    return 0;
}