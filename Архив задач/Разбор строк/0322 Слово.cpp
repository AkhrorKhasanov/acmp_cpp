#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s, result = "";
    cin >> s;
    vector<long long int> v;
    long long int a = 1, b = 1;
    v.push_back(a);
    v.push_back(b);
    for (int i = 0; i < s.size(); i++)
    {
        long long int temp = a;
        a = b;
        b += temp;
        v.push_back(b);
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= s.size() && result.size() < s.size())
        {
            result += s[v[i] - 1];
        }
        else
        {
            break;
        }
    }
    cout << result << endl;
    return 0;
}