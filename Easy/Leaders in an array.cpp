///Time Limit Exceed.
///Now accepted because of one Loop. So, try to avoid nested loop.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j;
        list<int> L;
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int maxx=-1;
        for(i=n-1; i>=0; i--)
        {
            if(arr[i]>=maxx)
            {
                L.push_front(arr[i]);
                maxx=arr[i];
            }
        }
        list<int> :: iterator it;
        for(it=L.begin(); it!=L.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
