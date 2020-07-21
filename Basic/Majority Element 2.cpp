///Sorting. First I was think about this.
///Accepted in 0.27 second.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, c=1, major;
        bool major_exist = false;
        cin >> n;
        major=n/2;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            if(c>=major+1)
            {
                major_exist=true;
                cout << arr[i] << endl;
                break;
            }
        }
        if(major_exist==false)
        {
            cout << "-1" << endl;
        }
    }
}
