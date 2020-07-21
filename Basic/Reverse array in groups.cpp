/*Segmentation fault. It is the runtime error caused because of the memory access violation.
For Eg :- Stackoverflow, read violation etc..*/
///Axepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i, j, m=0;
        cin >> n >> k;
        int en = k;
        int arr[n];
        if(k>=n)
        {
            for(i=0; i<n; i++)
            {
                cin >> arr[i];
            }
            for(i=n-1; i>=0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int step=ceil((double)n/k);
            for(i=1; i<=step; i++)
            {
                for(j=en-1; j>=m; j--)
                {
                    cin >> arr[j];
                }
                m=en;
                en+=k;
                while(en>n)
                {
                    en--;
                }
            }
            for(i=0; i<n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
