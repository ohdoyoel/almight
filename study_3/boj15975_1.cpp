#include<iostream>
#include<vector>
using namespace std;

int norm(int i, int n, vector<int> length, vector<int> color)
{   
    vector<int> idx;
    int min_norm = 1000000, dis;
    for (int k = 0; k < n; k++)
    {
        if ((i != k) && (color[i] == color[k]))
        {
            idx.push_back(k);
        }
    }
    if (idx.size() == 0)
    {
        return 0;
    }
    for (auto id:idx)
    {
        dis = abs(length[i] - length[id]);
        if (dis < min_norm)
        {
            min_norm = dis;
        }
    }
    return min_norm;
}

int main()
{
    int n, input;
    cin >> n;
    vector<int> length, color;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        length.push_back(input);
        cin >> input;
        color.push_back(input);
    }
    int res = 0;
    for (int j = 0; j < n; j++)
    {
        res += norm(j, n, length, color);
    }
    cout << res << endl;
}

// 시바 왜 안돼 ㅡㅡ