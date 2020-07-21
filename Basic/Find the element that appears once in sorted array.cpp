///Accepted.

#include <bits/stdc++.h>
#define OVER return 0
using namespace std;

void input(long arr[], long &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long arr[n];
        input(arr, n);
        for(long i=0; i<n; i++)
        {
            if(count(arr, arr+n, arr[i])==1)
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }

    OVER;
}
