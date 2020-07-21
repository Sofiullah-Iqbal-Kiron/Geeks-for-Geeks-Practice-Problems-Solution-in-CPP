///Accepted in first submission. I learned Kadane's algorithm from Wikipedia. This is not fear, first try yourself more and more.
///Execution time: 0.21 second.

#include<iostream>
#include<climits>
using namespace std;

int Max(int arr[], int n)
{
    int i, maxx=INT_MIN;
    for(i=0; i<n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    return maxx;
}

int max_subarray_sum(int arr[], int n)
{
    int i, current, best;
    best = (current = 0);
    for(i=0; i<n; i++)
    {
        current = max(0, current+arr[i]);
        best = max(current, best);
    }
    return best;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        bool all_negative=true, zero_exist=false;
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]>0)
            {
                all_negative=false;
            }
            if(arr[i]==0)
            {
                zero_exist=true;
            }
        }
        if(all_negative==true && zero_exist==true)
        {
            cout << "0" << endl;
        }
        else if(all_negative==true && zero_exist==false)
        {
            cout << Max(arr, n) << endl;
        }
        else
        {
            cout << max_subarray_sum(arr, n) << endl;
        }
    }
}
