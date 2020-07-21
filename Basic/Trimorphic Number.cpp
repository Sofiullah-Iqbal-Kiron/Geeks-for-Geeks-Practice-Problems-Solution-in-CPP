///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int N, cube, Nrem, crem, a;
        bool trimorphic=false;
        cin >> N;
        cube = N*N*N;
        if(N==0)
        {
            cout << "1" << endl;
            return 0;
        }
        while(N>0)
        {
            Nrem = N%10;
            crem = cube%10;
            if(Nrem==crem)
            {
                trimorphic = true;
            }
            else
            {
                trimorphic = false;
                break;
            }
            N/=10;
            cube/=10;
        }
        if(trimorphic==true)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
