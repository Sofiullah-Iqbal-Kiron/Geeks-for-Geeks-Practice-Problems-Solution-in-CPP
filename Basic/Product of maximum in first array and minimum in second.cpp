#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N1;
        cin >> N1;
        int arr1[N1];
        for(int i=0; i<N1; i++)
        {
            cin >> arr1[i];
        }
        int N2;
        cin >> N2;
        int arr2[N2];
        for(int i=0; i<N2; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1+N1);
        sort(arr2, arr2+N2);
        cout << arr1[N1-1]*arr2[0] << endl;
    }
}
