#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr[100001];

int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[y].push_back(x); // 각 색깔을 idx로 하는 arr, 같은 색깔 벡터에 좌표를 넣음
    }
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        int size = arr[i].size(); // i번째 색깔을 가진 점의 개수
        if (size < 2)
            continue; // 점이 한 개 또는 빵 개, 거리 0
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0; j < size; j++)
        {
            if (j == 0)
                s += arr[i][j + 1] - arr[i][j];
            else if (j == size - 1)
                s += arr[i][j] - arr[i][j - 1];
            else
                s += min(arr[i][j + 1] - arr[i][j], arr[i][j] - arr[i][j - 1]);
        }
    }
    cout << s << endl;
    return 0;
}