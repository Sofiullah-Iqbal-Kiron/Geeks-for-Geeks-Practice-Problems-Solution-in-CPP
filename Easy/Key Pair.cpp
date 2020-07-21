///Accepted.
///UBUNTU: https://paste.ubuntu.com/p/k83ytP2GS8/

#include<iostream>
#include<algorithm>
using namespace std;

int dif(int a, int b)
{
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}

bool pair_exist(int arr[], int n, int x)
{
    bool exist = false;
    int i, j, need;
    sort(arr, arr+n);
    for(i=0; i<n; i++)
    {
        need = dif(arr[i], x);
        for(j=n-1; j>i; j--)
        {
            if(arr[j]==need)
            {
                exist = true;
                goto paici;
            }
            else if(arr[j]<need)
            {
                break;
            }
        }
    }
paici:
    if(exist==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, i, j, a;
        bool exist = false;
        cin >> n >> x;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(pair_exist(arr, n, x) == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
