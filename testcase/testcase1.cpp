#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_set<int> unique;
    for(int i=0;i<n;i++){
        unique.insert(a[i]);
    }
    for(auto u: unique){
        cout<<u<<" "<<endl;
    }
    
    return 0;

}