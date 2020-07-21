///Accepted.

#include<bits/stdc++.h>
using namespace std;

bool isP2(long long int n)
{
    if(n==0)
    {
        return false;
    }
    if(n==1)
    {
        return true;
    }
    if(floor(log2(n))==ceil(log2(n)))
    {
        return true;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        if(isP2(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
