#include<bits/stdc++.h>
using namespace std;


int main() {
    
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(7);
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}