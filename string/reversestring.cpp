#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}