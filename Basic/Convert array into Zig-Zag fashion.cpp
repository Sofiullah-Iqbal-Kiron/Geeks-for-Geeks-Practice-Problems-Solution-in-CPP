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
        int n, i;
        bool flag = true;
        cin >> n;
        int arr[n];
        input(arr, n);

        for (i = 0; i < n - 1; i++)
        {
            if (flag)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            flag = !flag;
        }

        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    OVER;
}
