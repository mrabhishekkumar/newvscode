#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;
int main(){
    
    // intialization of pair

    pair<int,string> p;
    p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1=p;
    p1.first=3;
    cout<<p1.first<<" "<<p1.second<<endl;
    
    // to define an array

    pair<int,int> p_array[3];
    p_array[0]=(1,2);
    p_array[1]=(2,3);
    p_array[2]=(3,4);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}