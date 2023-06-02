#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    int t,c,d,row,column,d1;
    cin >> t;
    while(t--)
    {
        cin>>k;
        c=ceil((sqrt(k)));//c is block of input number.
        d=(c*c) - k;//d=difference.
        if(d<c)
        {
            row = c;
            column = d+1;
        }
        if(d>=c)
        {
            d1=d-c;
            row = (c-1)-d1;
            column = c;
        }

        cout<<row<<" "<<column<<endl;

    }
    return 0;
}

