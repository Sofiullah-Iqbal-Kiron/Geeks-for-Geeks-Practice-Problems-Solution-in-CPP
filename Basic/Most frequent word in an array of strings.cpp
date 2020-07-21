///Accepted. Helped from Yeasin Khacharu.

#include<bits/stdc++.h>
using namespace std;

int MaxEle(int arr[], int n)
{
    int i, a=0;
    for(i=0; i<n; i++)
    {
        a = max(a, arr[i]);
    }
    return a;
}

int main()
{
    int t, i, j;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s[n];
        int cnt[n]= {0};
        cin >> s[0];
        cnt[0]=1;
        for(i=1; i<n; i++)
        {
            cin >> s[i];
            cnt[i]++;
            for(j=0; j<i; j++)
            {
                if(s[i]==s[j])
                {
                    s[i]="NOTHING";
                    cnt[j]++;
                    break;
                }
            }
        }
        int m = MaxEle(cnt, n);
        for(i=n-1; i>=0; i--)
        {
            if(m==cnt[i] && s[i]!="NOTHING")
            {
                cout << s[i] << endl;
                break;
            }
        }
    }
}
