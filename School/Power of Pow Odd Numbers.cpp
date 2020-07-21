///Accepted.

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n, ans, r, a, b;
	    cin >> n;
	    r=2*n-1;
	    a=(r*(r+1)*(2*r+1))/6;
	    b=(2*(n-1)*n*(2*n-1))/3;
	    ans = a-b;
	    cout << ans << endl;
	}
	return 0;
}
