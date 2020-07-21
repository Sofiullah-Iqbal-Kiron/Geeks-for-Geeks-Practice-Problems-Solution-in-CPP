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
	    long long int n, ans;
	    cin >> n;
	    ans = (2*n*(n+1)*(2*n+1))/3;
	    cout << ans << endl;
	}
	return 0;
}
