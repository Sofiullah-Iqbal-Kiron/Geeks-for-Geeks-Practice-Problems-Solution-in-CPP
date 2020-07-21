#include<iostream>
using namespace std;

int Count(int arr[], int n, int value)
{
    int c=0, i;
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
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, major, j, c=0;
        bool major_exist=false;
        cin >> n;
        major=n/2;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(i=0; i<n; i++)
        {
            c=max(c, Count(arr, n, arr[i]));
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
