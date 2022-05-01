#include <iostream>
using namespace std;

int main()
{
    int n;
    int num[1001];
    int dp[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (num[j] < num[i] && dp[j] >= dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < dp[i])
        {
            max = dp[i];
        }
    }
    cout << max << endl;
}