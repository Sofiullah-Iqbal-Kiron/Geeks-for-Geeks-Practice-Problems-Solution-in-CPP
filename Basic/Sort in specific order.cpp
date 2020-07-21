///Accepted in 0.81 second.

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
        long long int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        vector<int> odd;
        vector<int> even;
        for(i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
            }
            else if(arr[i]%2!=0)
            {
                odd.push_back(arr[i]);
            }
        }
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int index=0;
        vector<int> :: iterator it;
        for(it=odd.begin(); it!=odd.end(); ++it)
        {
            arr[index++]=*it;
        }
        for(it=even.begin(); it!=even.end(); ++it)
        {
            arr[index++]=*it;
        }
        for(i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
