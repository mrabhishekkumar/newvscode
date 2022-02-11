/*
Given N strings,print unique strings
in the lexiographical order with their
frequency 
N<=10^5
|S|<=100
*/

#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std; 
int main() { 
    map<string,int> m;  // --> map declaration
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        m[s]++;
    }
    for(auto val: m){
        cout<<val.first<<" "<<val.second<<endl;
    }

return 0; 
} 