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
        bool lucky = true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0' || s[i]=='1')
            {
                lucky = false;
                break;
            }
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j] || s[j]=='0' || s[j]=='1' || s[i]==((s[j-1]-'0')*(s[j]-'0'))+'0')
                {
                    lucky = false;
                    break;
                }
            }
        }
        if(lucky==true)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
