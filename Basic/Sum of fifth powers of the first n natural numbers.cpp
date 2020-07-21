///Accepted.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int N, sum=0, i;
        cin >> N;
        for(i=1; i<=N; i++)
        {
            sum+=(powl(i, 5)); ///(2*n^6+6*n^5+5*n^4 – n2)/12;
        }
        cout << sum << endl;
    }
}
