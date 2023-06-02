#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
long long a=0;
for(int i=0;i<(s.size());++i){
    a=a*26+((s[i]-'A')+1);
}
    cout<<a<<endl;



return 0;
}

