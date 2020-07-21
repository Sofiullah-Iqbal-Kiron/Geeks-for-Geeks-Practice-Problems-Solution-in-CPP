///Correct Answer. Execution time 0.06 second.

#include<bits/stdc++.h>
#define OVER return 0
using namespace std;

void input(int arr[], int &n)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, k;
        bool left, right, gotit;
        left=(right=true);
        gotit=false;
        cin >> n;
        int arr[n], ans;
        input(arr, n);
        for(i=1; i<n-1; i++)
        {
            ans = arr[i];
            left=true;
            right=true;
            for(j=0; j<i; j++)
            {
                if(arr[j]>ans)
                {
                    left=false;
                    break;
                }
            }
            if(left==true)
            {
                for(j=i+1; j<n; j++)
                {
                    if(ans>arr[j])
                    {
                        right=false;
                        break;
                    }
                }
            }
            if(left==true && right==true)
            {
                gotit=true;
                break;
            }
        }
        if(gotit==true)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    OVER;
}
