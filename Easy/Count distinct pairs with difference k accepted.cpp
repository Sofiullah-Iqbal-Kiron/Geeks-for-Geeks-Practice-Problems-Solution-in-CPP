///Accepted.
///Ubuntu pastebin: https://paste.ubuntu.com/p/KJBBggbpbW/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, a, b, k, c=0;
        cin >> n;
        int arr[n]= {INT_MIN};
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        if(k>0)
        {
            for(i=1; i<n; i++)
            {
                for(j=0; j<i; j++)
                {
                    if(i!=j)
                    {
                        if(arr[j]==arr[i])
                        {
                            arr[i]=INT_MIN;
                            break;
                        }
                    }
                }
            }
            for(i=0; i<n; i++)
            {
                a = arr[i]+k;
                b = arr[i]-k;
                for(j=i; j<n; j++)
                {
                    if(arr[j]==a || arr[j]==b)
                    {
                        c++;
                    }
                }
            }
        }
        else if(k==0)
        {
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        c++;
                        for(int x=j; x<n; x++)
                        {
                            if(arr[j]==arr[x])
                            {
                                arr[x]=INT_MIN;
                            }
                        }
                        break;
                    }
                }
            }
        }
        cout << c << endl;
    }
}
