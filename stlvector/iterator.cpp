
#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,7,9,4};
    vector<int>::iterator it=v.begin(); 
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" "<<endl;
    }
return 0;
}