#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, i;
    cin >> T;
    while(T--)
    {
        cin >> N;
        for(i=0; i<=N; i++)
        {
            if((pow(2, i))>=N)
            {
                cout << pow(2, i) << endl;
                break;
            }
        }
    }

	return 0;
}
