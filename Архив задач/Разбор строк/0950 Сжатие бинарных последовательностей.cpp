#include <iostream>
using namespace std;

int main()
{
    string s, res = "", hlp = "abcdefghijklmnopqrstuvwxyz";
    int c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            res += hlp[c];
            c = 0;
        }
        else
        {
            c++;
        }
    }
    cout << res << endl;
    return 0;
}