#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d[1000001];
    d[1] = 0;
    for (int i = 2; i < n + 1; i++)
    {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0 && d[i] > d[i / 2])
            d[i] = d[i / 2] + 1;
        if (i % 3 == 0 && d[i] > d[i / 3])
            d[i] = d[i / 3] + 1;
    }
    cout << d[n] << endl;
}