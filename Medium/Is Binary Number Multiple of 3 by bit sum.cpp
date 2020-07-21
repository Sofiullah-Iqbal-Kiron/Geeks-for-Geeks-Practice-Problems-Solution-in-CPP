///Accepted in 0.1 second

#include<iostream>
#define mod %
using namespace std;

bool isM3(string s)
{
    if(s.size()==1)
    {
        if(s=="0")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int i, A, B;
    for(i=s.size()-1, A=0; i>=0; i-=2)
    {
        if(s[i]=='1')
        {
            A++;
        }
    }
    for(i=s.size()-2, B=0; i>=0; i-=2)
    {
        if(s[i]=='1')
        {
            B++;
        }
    }
    if((A-B) mod 3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string bs;
        cin >> bs;
        if(isM3(bs)) //No equal statement means, if (true or non-zero)
        {
            cout << true << endl;
        }
        else
        {
            cout << false << endl;
        }
    }
}
