#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int arr[n-1], sum=0;
        for(i=0; i<n-1; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        int natural_sum;
        natural_sum=(n*(n+1))/2;
        cout << natural_sum-sum << endl;
    }
    return 0;
}
