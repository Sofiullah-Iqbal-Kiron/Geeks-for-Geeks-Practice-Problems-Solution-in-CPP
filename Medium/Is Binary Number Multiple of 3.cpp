///Accepted in 0.1 second. আমি  kingkortobbobimur. tar mane chesta korlei Allah help koren.
///UBUNTU: https://paste.ubuntu.com/p/ndkCgmnk34/

#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;

void Swap(string &s1, string &s2)
{
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

string Add(string s1, string s2)
{
    string result;
    int cs, carry = 0;
    if (s1.size() < s2.size())
    {
        Swap(s1, s2);
    }
    int c1, c2;
    c1 = s1.size();
    c2 = s2.size();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = c2; i < c1; i++)
    {
        s2.push_back('0');
    }
    for (int i = 0; i < c1; i++)
    {
        cs = (s2[i] - '0') + (s1[i] - '0') + carry;
        result.push_back(cs % 10 + '0');
        carry = cs / 10;
    }
    if (carry)
    {
        result.push_back(carry + '0');
    }
    reverse(result.begin(), result.end());

    return result;
}

string Pow2(int n)
{
    if (n == 0)
    {
        return "1";
    }
    else if (n == 1)
    {
        return "2";
    }
    string a = "2";
    int i;
    for (i = 1; i < n; i++)
    {
        a = Add(a, a);
    }

    return a;
}

string bin_To_deci(string s)
{
    string decimal = "0", deci;
    lli i, j;
    for (i = s.size() - 1, j = 0; i >= 0; i--, j++)
    {
        if (s[i] == '1')
        {
            deci = Pow2(j);
            decimal = Add(decimal, deci);
        }
    }

    return decimal;
}

lli digit_sum(string s)
{
    lli sum = 0;
    string ss = bin_To_deci(s);
    for (int i = 0; i < ss.size(); i++)
    {
        sum += (ss[i] - '0');
    }
    return sum;
}

bool isM3(string s)
{
    if (digit_sum(s) % 3 == 0)
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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isM3(s) == true)
        {
            cout << true << endl;
        }
        else
        {
            cout << false << endl;
        }
    }
}
