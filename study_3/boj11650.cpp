#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <vector <int>> v;

bool cmp(vector <int> a, vector <int> b)
{
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] < b[0];
}

int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto &s : v)
    {
        cout << s[0] << ' ' << s[1] << '\n';
    }
}