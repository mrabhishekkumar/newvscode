/*Input : 111
Output : 7*/

#include </Library/Developer/CommandLineTools/usr/include/c++/v1/bits/stdc++.h>
using namespace std;

int main(){
     int n,sum=0,i=0;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        n=n/10;
        sum+=rem * pow(2,i);
        i++;
    }
    cout<<sum<<endl;
    return 0;
}