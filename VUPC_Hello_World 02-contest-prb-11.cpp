#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,c=0;
long long a;
cin>>t;
while(t--){
    cin>>n;
    while(n--){
        cin>>a;
        if(a%2!=0){
            c++;
        }
    }
    cout<<c<<endl;
    c=0;
}

return 0;
}

