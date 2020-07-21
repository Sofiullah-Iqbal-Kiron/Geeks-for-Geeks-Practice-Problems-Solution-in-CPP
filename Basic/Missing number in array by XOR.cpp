#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, i, n;
        cin >> n;
        int arr[n-1];
        for(i=0; i<n-1; i++)
        {
            cin >> arr[i];
        }
        a=arr[0];
        for(i=1; i<n-1; i++)
        {
            a^=arr[i];
        }
        b=1;
        for(i=2; i<=n; i++)
        {
            b^=i;
        }
        int ans = a^b;
        cout << ans << endl;
    }
}
