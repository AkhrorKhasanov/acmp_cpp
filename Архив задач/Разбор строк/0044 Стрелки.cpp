#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 0, i = 0;
    while (i < s.size())
    {
        if (s[i] == '>')
        {
            if (s.substr(i, 5) == ">>-->")
            {
                c++;
            }
                }
        else if (s[i] == '<')
        {
            if (s.substr(i, 5) == "<--<<")
            {
                c++;
            }
        }
        i++;
    }
    cout << c << endl;
    return 0;
}