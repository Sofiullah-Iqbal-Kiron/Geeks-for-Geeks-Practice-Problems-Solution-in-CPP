///Accepted. Helped by Anis.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        cin.ignore();
        char s[n];
        cin >> s;
        char str[n+1];
        for(i=0; i<n; i++)
        {
            str[i]=s[n-(i+1)];
        }
        if(strcmp(s, str)==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
