///Accepted. Mahtab Hossain Tanim helped for the time limit. Use all long long.

#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

ll Count(ll arr[], ll n, ll value)
{
    ll c=0, i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==value)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, c=0;
        bool non_rep = false;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(i=0; i<n; i++)
        {
            if(Count(arr, n, arr[i])==1)
            {
                non_rep=true;
                cout << arr[i] << endl;
                break;
            }
        }
        if(non_rep == false)
        {
            cout << "0" << endl;
        }
    }
}
