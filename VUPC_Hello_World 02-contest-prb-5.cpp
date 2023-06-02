#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    long long int n ;
    cin >> t ;
    for(int i = 0 ; i < t ; i ++){
    cin >> n;
    int c1 = 0 , c2 = 0;
    while(n%2==0){
        c1 ++ ;
        n /= 2;
    }
    while(n%3==0){
        c2 ++ ;
        n /= 3;
    }
    if(c2 >= c1 && n == 1){
        cout << 2 * c2 - c1 << endl ;
    }
    else{
        cout << "-1" << endl;
    }
    }

    return 0 ;
}
