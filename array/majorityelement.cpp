#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
#include<unordered_map>
using namespace std;


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int mx=0;
    for(auto i: m){
        if(i.second>mx){
            mx=i.first;
        }
    }
    cout<<mx<<endl;
    
    

    return 0;
}