#include <iostream>
using namespace std;

int main()
{
    int n;
    int num[100001];
    int dp[100001];
    int max = -1001;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
        cin >> num[i];
    for (int i = 1; i < n + 1; i++)
    {
        if (dp[i - 1] + num[i] < num[i])
        {
            dp[i] = num[i];
        }
        else
        {
            dp[i] = dp[i - 1] + num[i];
        }
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }
    cout << max << endl;
}