#include<bits/stdc++.h>
using namespace std;
int main(){
int x1,x2,x3,x4;
cin>>x1;
int Max=x1;
cin>>x2;
if(Max<x2){
    Max=x2;
}
cin>>x3;
if(Max<x3){
    Max=x3;
}
cin>>x4;
if(Max<x4){
    Max=x4;
}
if((Max-x1) != 0){
    cout<<Max-x1<<" ";
}
if((Max-x2) != 0){
    cout<<Max-x2<<" ";
}
if((Max-x3) != 0){
    cout<<Max-x3<<" ";
}
if((Max-x4) != 0){
    cout<<Max-x4<<" ";
}
return 0;
}

