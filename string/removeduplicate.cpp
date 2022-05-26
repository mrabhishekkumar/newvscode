#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count[26]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']+=1;
    }
    char ans='a';
    for(int i=0;i<26;i++){
        if(count[i]>=1){
            ans=i+'a';
        }
    }
    cout<<ans<<endl;
    return 0;
}