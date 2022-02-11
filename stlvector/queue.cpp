#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;


int main() {
    
    queue<string> q;
    q.push("abh");
    q.push("his");
    q.push("hlw");
    q.push("hi");
    
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}