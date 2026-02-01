#include <iostream>
using namespace std;

int main()
{
    string p, v;
    cin >> p >> v;
    int b = 0, k = 0;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == v[i])
            b++;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && p[i] == v[j])
                k++;
        }
    }
    cout << b << " " << k << endl;
    return 0;
}