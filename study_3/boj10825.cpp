#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int kor, eng, math;
};

vector <Student> v;

bool cmp(Student &a, Student &b)
{
    if (a.kor == b.kor)
    {
        if (a.eng == b.eng)
        {
            if (a.math == b.math)
                return a.name < b.name;
            return a.math > b.math;
        }
        return a.eng < b.eng;
    }
    return a.kor > b.kor;
}

int main()
{
    int n, k, e, m;
    string na;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> na >> k >> e >> m;
        v.push_back({na, k, e, m});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto &s : v)
    {
        cout << s.name << '\n';
    }
}