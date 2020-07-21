///Correct Answer, simple statement but critical solution. Execution time 0.13 second.

#include<bits/stdc++.h>
using namespace std;

int dif(int a, int b)
{
    return a>b?a-b:b-a;
}

void input(int arr[], int &n)
{
    int i;
    for(i=0; i<n; i++)
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
        int n, k, i, dif1, dif2;
        cin >> n >> k;
        int arr[n];
        input(arr, n);
        if(k>=arr[n-1])
        {
            cout << arr[n-1] << endl;
        }
        else if(k<=arr[0])
        {
            cout << arr[0] << endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(arr[i]<k && k<=arr[i+1] && i+1<n)
                {
                    dif1=dif(arr[i], k);
                    dif2=dif(arr[i+1], k);
                    if(dif1<dif2)
                    {
                        cout << arr[i] << endl;
                        break;
                    }
                    else if(dif2<=dif1)
                    {
                        cout << arr[i+1] << endl;
                        break;
                    }
                }
            }
        }
    }

    //code
    return 0;
}
