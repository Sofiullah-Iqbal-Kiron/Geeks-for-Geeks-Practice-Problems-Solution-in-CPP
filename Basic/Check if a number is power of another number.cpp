#include<bits/stdc++.h>
using namespace std;

bool isP(long long int a, long long int b)
{
    if(a==b || b==1)
    {
        return true;
    }
    if(a==1 || b==0 || a==0)
    {
        return false;
    }
    for(int i=2; i<b; i++)
    {
        if(powl(a, i)==b)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b;
        cin >> a >> b;
        if(isP(a, b))
        {
            cout << true << endl;
        }
        else
        {
            cout << false << endl;
        }
    }
}
