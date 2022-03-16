#include <iostream>
using namespace std;

// 각 자리수 합 구하는 함수
int sum(int n)
{
    int res = n;
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int n, res;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        res = sum(i);
        if (res == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}