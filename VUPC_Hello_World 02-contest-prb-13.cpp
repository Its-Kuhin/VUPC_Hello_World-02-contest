#include <bits/stdc++.h>
using namespace std;
int main()
{
    short a,b;
    double r,f;
    cin>>a>>b;
    if(a<b){
            r=(double)b/2;
    //cout<<"r="<<r<<endl;
        f=floor(r);
       // cout<<"f="<<f<<endl;;
        if(f==a){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        r=b/2.0;
        f=floor(r);
        if(f==b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

	return 0;
}

