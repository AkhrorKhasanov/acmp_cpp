#include <iostream>
using namespace std;

bool is_correct_letter(char c)
{
    bool result = false;
    string hlp = "ABCEHKMOPTXY";
    for (int i = 0; i < hlp.size(); i++)
    {
        if (c == hlp[i])
        {
            result = true;
            break;
        }
    }
    return result;
}

bool is_num(char c)
{
    bool result = false;
    string hlp = "0123456789";
    for (int i = 0; i < 10; i++)
    {
        if (c == hlp[i])
        {
            result = true;
            break;
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 6 && is_correct_letter(s[0]) && is_num(s[1]) && is_num(s[2]) && is_num(s[3]) && is_correct_letter(s[4]) && is_correct_letter(s[5]))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}