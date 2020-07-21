#include<bits/stdc++.h>
#define END return 0;
using namespace std;

int main()
{
    int T, N, K, i;
    cin >> T;
    while(T--)
    {
        cin >> N;
        int arr[N];

        for(i=0; i<N; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+N);
        cin >> K;
        cout << arr[K-1] << endl;
    }

    END;
}

