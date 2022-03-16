#include <iostream>
#include <string>

int main()
{
    int n, sum, res;
    std::cin >> n;

    res = 1000001;
    for (int i = 1; i <= n; i++)
    {   
        std::string s = std::to_string(i);
        sum = i;
        for (char c : s)
        {
            sum += (int)c - 48;
        }

        if (sum == n)
        {
            res = i;
            break;
        }
    }
    if (res == 1000001)
    {
        res = 0;
    }
    std::cout << res << std::endl;
}