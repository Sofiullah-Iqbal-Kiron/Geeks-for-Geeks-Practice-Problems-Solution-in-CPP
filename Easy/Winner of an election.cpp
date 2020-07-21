///Accepted. GfG can not compile system("PAUSE");.
///Ubuntu: https://paste.ubuntu.com/p/SYtV7Nm2TN/

#include<bits/stdc++.h>
#define START int main(){
#define END system("pause");}
using namespace std;

void bubble_sort(string s[], int cnt[], int &n)
{
    int i, j;
    bool swapped;
    for(i=0; i<n; i++)
    {
        swapped = false;
        for(j=0; j<n-i-1; j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j], s[j+1]);
                swap(cnt[j], cnt[j+1]);
                swapped=true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

int MaxEle(int arr[], int n)
{
    int i, a=0;
    for(i=0; i<n; i++)
    {
        a = max(a, arr[i]);
    }
    return a;
}

START

    int t, i, j;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s[n];
        int cnt[n]={0};
        cin >> s[0];
        cnt[0]++;
        for(i=1; i<n; i++)
        {
            cin >> s[i];
            cnt[i]++;
            for(j=0; j<i; j++)
            {
                if(s[j]==s[i])
                {
                    s[i]="NOTHING";
                    cnt[j]++;
                    break;
                }
            }
        }
        int m = MaxEle(cnt, n);
        bubble_sort(s, cnt, n);
        for(j=0; j<n; j++)
        {
            if(cnt[j]==m && s[j]!="NOTHING")
            {
                cout << s[j] << " " << cnt[j] << endl;
                break;
            }
        }
    }

END
