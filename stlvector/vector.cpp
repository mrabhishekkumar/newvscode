
#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;
void printvector(vector<int> v){
for(int i=0;i<v.size();i++){ 
    cout<<v[i]<<" ";
}
cout<<endl; 
}
int main(){
 vector<int> v;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
   int x;
   cin>>x;
   v.push_back(x);
 }
printvector(v);
return 0;
}