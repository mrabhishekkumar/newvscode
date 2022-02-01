#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    
map<int,string> m;           // --> map declaration

m[101]="Rishu"; 
m[102]="isha";       
m[103]="ab";
m[104]="Wenki"; 

//map<int,string>::iterator it; 
//for(it=m.begin();it!=m.end();it++){ 
//cout<<(*it).first<<" "<<(*it).second<<" "; 
//} 

for(auto &val: m){
    cout<<val.first<<" "<<val.second<<endl;
}
return 0; 
} 