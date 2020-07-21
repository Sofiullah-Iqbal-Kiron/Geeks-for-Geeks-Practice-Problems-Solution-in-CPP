///Accepted.

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

int index(string s)
{
    int i;
    for(i=s.size(); i>=0; i--)
    {
        if(s[i]=='1')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << index(s) << endl;
    }

    OVER;
}

