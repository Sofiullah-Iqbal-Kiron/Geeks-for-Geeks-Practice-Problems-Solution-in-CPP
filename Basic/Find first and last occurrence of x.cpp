///Accepted in 0.02 second.

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
        int n, x, fi = -1, li, i, j;
        cin >> n >> x;
        int arr[n];
        input(arr, n);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                if (fi == -1)
                {
                    fi = i;
                    li = i;
                }
                else
                {
                    li = i;
                }
            }
            else if (arr[i] > x)
            {
                break;
            }
        }
        if (fi == -1)
        {
            cout << fi << endl;
        }
        else
        {
            cout << fi << " " << li << endl;
        }
    }

    OVER;
}
