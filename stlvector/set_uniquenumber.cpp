
/*Set does not store the duplicate value and it 
give sorted values*/



#include<bits/stdc++.h>
using namespace std;


int main() {
    
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        s.insert(in);
    }
    for(auto val: s){
        cout<<val<<" "<<endl;
    }

    return 0;
}