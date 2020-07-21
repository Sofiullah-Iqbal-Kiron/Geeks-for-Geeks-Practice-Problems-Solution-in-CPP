///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool Ls = true;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j])
                {
                    Ls=false;
                    break;
                }
            }
        }
        if(Ls==true)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
