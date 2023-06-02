#include<iostream>
using namespace std;
int main(){
int n,a,b,out,in,total=0;
cin>>n;
int r1=0;
for(int i=0;i<n;++i){
    cin>>a>>b;
    out=a;
    in=b;
    total=(total-out)+in;

    if(total>r1){
        r1=total;
    }
}
cout<<r1<<endl;

return 0;
}
