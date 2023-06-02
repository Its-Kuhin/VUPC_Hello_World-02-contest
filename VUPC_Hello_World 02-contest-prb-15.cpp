#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	long long n;
	string c;

	cin>>t;

	for (int i = 1; i <= t; i++) {
		cin>>n;
		cin>>c;

		n = n % 3;
		if(c=="Alice") {
			if((n == 0) || (n == 2)) {
				printf("Case %d: Alice\n", i);
			}

			else {
				printf("Case %d: Bob\n", i);
			}

		}

		else
		{
			if((n == 1) || (n == 2)) {
				printf("Case %d: Bob\n", i);
			}

			else {
				printf("Case %d: Alice\n", i);

			}

		}


	}



}
