#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int res = 51, dif;
    for (int i = 0; i < b.size() - a.size() + 1; i++)
    {
        dif = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if (b[i + j] != a[j])
            {
                dif++;
            }
        }
        if (dif < res)
        {
            res = dif;
        }
    }
    cout << res;
}