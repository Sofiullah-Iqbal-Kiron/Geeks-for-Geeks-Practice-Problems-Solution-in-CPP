///Accepted.

#include <bits/stdc++.h>
#define OVER return 0
using namespace std;

void input(int arr[], int &n)
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
        long n, m, k, x;
        cin >> n >> m >> k;
        vector<int>v1;
        for(int i=0; i<n+m; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        cout << v1[k-1] << endl;
    }

    OVER;
}
