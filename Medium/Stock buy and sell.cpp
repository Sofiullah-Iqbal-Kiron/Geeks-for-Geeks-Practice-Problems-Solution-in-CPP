///Alhamdulillah, get helped from GfG hints but before I tried enough. Execution time 0.01 sec.

#include<bits/stdc++.h>
#define OVER return 0;
using namespace std;

void input(int arr[], int &n)
{
    for(int i=0; i<n; i++)
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
        int n, i, j;
        bool profit = false;
        stack<int> mini, maxi;
        cin >> n;
        int arr[n];
        input(arr, n);
        if(arr[0]<arr[1])
        {
            mini.push(0);
        }
        if(n==2)
        {
            if(arr[0]<arr[1])
            {
                profit=true;
                maxi.push(1);
            }
        }
        else
        {
            for(i=1; i<n-1; i++)
            {
                if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                {
                    profit=true;
                    maxi.push(i);
                }
                else if(arr[i-1]>arr[i] && arr[i]<arr[i+1])
                {
                    mini.push(i);
                }
            }
            if(arr[n-2]<arr[n-1])
            {
                profit=true;
                maxi.push(n-1);
            }
        }
        if(profit==true)
        {
            list<int> buyday, sellday;
            while(maxi.empty()==false)
            {
                sellday.push_front(maxi.top());
                maxi.pop();
                buyday.push_front(mini.top());
                mini.pop();
            }
            list<int> :: iterator it, mit;
            for(it=buyday.begin(), mit=sellday.begin(); it!=buyday.end(); it++, mit++)
            {
                cout << "(" << *it << " " << *mit << ")" << " ";
            }
        }
        else
        {
            cout << "No Profit";
        }

        cout << endl;
    }

    OVER;
}
