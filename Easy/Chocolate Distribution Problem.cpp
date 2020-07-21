///Correct Answer, Execution Time: 0.87 second.

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int i;

void input(long long int arr[], int &n)
{
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, j;
        cin >> n;
        long long int arr[n], ans = INT_MAX;
        input(arr, n);
        cin >> m;
        sort(arr, arr+n);
        for(i=0, j=m-1; j<n; i++)
        {
            ans = min(ans, arr[j++]-arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
