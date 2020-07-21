///Correct Answer, execution time 0.5 second.

#include<bits/stdc++.h>
using namespace std;

int Max(int arr[], int n)
{
    int i, a=arr[0];
    for(i=1; i<n; i++)
    {
        a=max(a, arr[i]);
    }
    return a;
}

int Min(int arr[], int n)
{
    int i, a=arr[0];
    for(i=1; i<n; i++)
    {
        a=min(a, arr[i]);
    }
    return a;
}


void pigeonhole_sort(int arr[], int &n)
{
    int i, max, min, range;
    max = Max(arr, n);
    min = Min(arr, n);
    range = max-min+1;
    vector<int> hole[range];
    for(i=0; i<n; i++)
    {
        hole[arr[i]-min].push_back(arr[i]);
    }
    int index=0;
    for(i=0; i<range; i++)
    {
        vector<int> :: iterator it;
        for(it=hole[i].begin(); it!=hole[i].end(); ++it)
        {
            arr[index++]=*it;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, center;
        cin >> n;
        if(n%2==0)
        {
            center=(n-1)/2;
        }
        else
        {
            center=n/2;
        }
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        pigeonhole_sort(arr, n);
        int aux[n];
        aux[center]=Min(arr, n);
        int index=center+1;
        for(i=1; i<n; i+=2)
        {
            aux[index++]=arr[i];
        }
        index=center-1;
        for(i=2; i<n; i+=2)
        {
            aux[index--]=arr[i];
        }
        for(i=0, index=0; i<n; i++)
        {
            cout << aux[index++] << " ";
        }
        cout << endl;
    }
}
